/*
 	Name: BG_fnc_initModuleMinefield

 	Author(s):	IGL
*/
#include "definesBG.sqf"

PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;

if(_activated) then {
		if(isServer) then {
		PR(_CountMinefield) = _logic getVariable "CountMinefield";
// SERVER
// Зазначаємо кількість мінних полів в глобальну перемінну MineFieldPoints
//_MineFieldPoint = _CountMinefield;
missionNamespace setVariable ["MineFieldPoints", _CountMinefield, true];

// Зазначаємо перемінну MarkN
_MarkerNamber = 0;
missionNamespace setVariable ["MarkN", _MarkerNamber, true];
};
		
	if(!isDedicated) then {
[_logic, _units, DELAY] spawn {
			PR(_logic) = _this select 0;
			PR(_units) = _this select 1;
			PR(_delay) = _this select 2;
			PR(_miner) 	               = _logic getVariable "Miner";
			PR(_MarkerMinefield) 	   = _logic getVariable "MarkerMinefield";
			PR(_TypeMinesPP)           = ["rhs_mine_pmn2","rhs_mine_tm62m","rhs_mine_msk40p_white","rhs_mine_msk40p_red","rhs_mine_msk40p_green","rhs_mine_msk40p_blue","rhs_mine_ozm72_a","rhs_mine_ozm72_b","rhsusf_mine_m14","rhs_mine_pfm1","rhs_mine_ptm1","ACE_FlareTripMine","rhs_mine_smine35_press","rhs_mine_smine35_trip","rhs_mine_smine44_press","rhs_mine_smine44_trip","rhs_mine_stockmine43_2m","rhs_mine_stockmine43_4m","rhs_mine_TM43","rhs_mine_m2a3b_press","rhs_mine_m2a3b_trip","rhs_mine_m3_pressure","rhs_mine_mk2_pressure","rhs_mine_M3_tripwire","rhs_mine_Mk2_tripwire","rhs_mine_M7A2","rhssaf_mine_pma3","rhssaf_mine_tma4","rhssaf_mine_mrud_a","rhssaf_mine_mrud_b","rhssaf_mine_mrud_c"] select (_logic getVariable "TypeMinesPP");
			PR(_TypeMinesAT)           = ["rhs_mine_pmn2","rhs_mine_tm62m","rhs_mine_msk40p_white","rhs_mine_msk40p_red","rhs_mine_msk40p_green","rhs_mine_msk40p_blue","rhs_mine_ozm72_a","rhs_mine_ozm72_b","rhsusf_mine_m14","rhs_mine_pfm1","rhs_mine_ptm1","ACE_FlareTripMine","rhs_mine_smine35_press","rhs_mine_smine35_trip","rhs_mine_smine44_press","rhs_mine_smine44_trip","rhs_mine_stockmine43_2m","rhs_mine_stockmine43_4m","rhs_mine_TM43","rhs_mine_m2a3b_press","rhs_mine_m2a3b_trip","rhs_mine_m3_pressure","rhs_mine_mk2_pressure","rhs_mine_M3_tripwire","rhs_mine_Mk2_tripwire","rhs_mine_M7A2","rhssaf_mine_pma3","rhssaf_mine_tma4","rhssaf_mine_mrud_a","rhssaf_mine_mrud_b","rhssaf_mine_mrud_c"] select (_logic getVariable "TypeMinesAT");
			PR(_RadiusMinefield)	   = _logic getVariable "RadiusMinefield";
			PR(_CountMines)	           = _logic getVariable "CountMines";
			PR(_GlobalMarkerMinefield) = ["true","false"] select (_logic getVariable "GlobalMarkerMinefield"); 
			
			fn_IZ = {
                     _tpStart = openMap [true,false];
                     hintc format ["Натисніть лівою клавішою миші на мапі, де необхідно розмістити мінне поле діаметром %1м.", (_this #3) select 2];

                     ["mineClick", "onMapSingleClick", {
                     hint ""; 

                     if (_pos inArea _this #5) then {
                     //Видаляємо старий та створюємо новий маркер "marker_center" навколо якого будуть розміщуватись міни, викликаємо скрипт розміщення мінного поля. 
                     deleteMarker "marker_center";
                     _marker_center = createMarker ["marker_center", _pos]; 
                     "marker_center" setMarkerType "Empty";

                     //Запускаємо глобально на кожному копмпютері функцію fn_Minefield в якому ставимо міни і ставимо маркери
					 //Обмеження в 500 мін
                     if (count allMines < 500) then {
					 //	Аргументи, що передаються у функцію fn_Minefield --- [_RadiusMinefield, _TypeMinesPP, _TypeMinesAT, _CountMines, _GlobalMarkerMinefield, player] 
                     noll = [_this #6,_this #7,_this #8,_this #9,_this #10,_this #11,_this #12] spawn fn_Minefield; 
                     } else {hint "";};

                     //Закриваємо карту видаляємо з курсора клік, беремо поінти і віднімаємо 1 використаний, оголошуємо глобально залишок поінтів.
                     openmap [false,false];
                     ["mineClick", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
                     _pointer = missionNamespace getVariable ["MineFieldPoints",[]];
                     _MineFieldPointer = _pointer - 1;
                     missionNamespace setVariable ["MineFieldPoints", _MineFieldPointer, true];
                     } else {
                     hint parseText format ["%1", "<t color='#ffc600'>ВСТАНОВЛЕННЯ МІН</t> <br /> <t color='#ffc600'>ПОЗА ВИЗНАЧЕНОЮ ЗОНОЮ</t> <br /> <t color='#ff0000'>ЗАБОРОНЕНО!</t>"];
                     };
                     }, [(_this #3) #0, (_this #3) #1,(_this #3) #2,(_this #3) #3,(_this #3) #4,(_this #3) #5,(_this #3) #6,(_this #3) #7]] call BIS_fnc_addStackedEventHandler;
                     };

		fn_Minefield = {
                        private ["_al_mine","_field_center","_field_radius","_nclass_mines","_number_mines","_marker_mines","_player_miner","_debugs_mines","_nm","_markern","_markerGlobal","_pos_mine","_markerstr","_mn"];
                    	//Вихідні дані:
                    	_field_center = "marker_center";
                    	_field_radius = _this #0;
                    	_nclass_mines = _this #1;   //PP Mine
                    	_nclass_minesAT = _this #2; //AT Mine
	                    _number_mines = _this #3;
    	                _marker_mines = _this #4;
						side_player_miner = _this #5;
						publicVariable "side_player_miner";
        	            _debugs_mines = true;
						_pointS = missionNamespace getVariable ["MineFieldPoints",[]];

                    	        // Створюємо загальний маркер мінного поля
								if (_marker_mines isEqualTo "true") then {
								_markerGlobal = format[ "marker_minefield_%1", _pointS];		
                            	_m1 = createMarker [_markerGlobal, getMarkerPos _field_center];
                                _m1 setMarkerShape "ELLIPSE";
                                _m1 setMarkerSize [_field_radius, _field_radius];
                                _m1 setMarkerColor "ColorOrange";
                                _m1 setMarkerBrush "DIAGGRID";
                                _m1 setMarkerDir 0;
								};

          	                    //Прибираємо помаранчеві маркери меж території на якій було дозволено встановлювати мінне поле
//              	             if (side player == side_player_miner) then {
//                               deleteMarkerLocal "markerline1";
//                               deleteMarkerLocal "markerline2";
//                               };

                                // Розміщення мін в зоні навколо одного маркера
                                _nm =0;
                                if ((missionNamespace getVariable ["MarkN",[]]) > 0) then {_mn = missionNamespace getVariable ["MarkN",[]];} else {_mn =0;};

                            	while {_nm < _number_mines} do {
                            	_pos_mine= [getMarkerPos _field_center,random _field_radius, random 360] call BIS_fnc_relPos;
                            	_pos_mineAT= [getMarkerPos _field_center,random _field_radius, random 360] call BIS_fnc_relPos;
                            	_al_mine = createMine [_nclass_mines, _pos_mine, [], 0];
                            	_al_mineAT = createMine [_nclass_minesAT, _pos_mineAT, [], 0];
                                //В цій умові можливо обмежувати показ маркерів мін	для відповідних сторін
                            	if ( _debugs_mines and side player == side_player_miner) then {
                            	missionNamespace setVariable ["mn", _mn, true];
                                missionNamespace setVariable ["nm", _nm, true]; 	
                            	missionNamespace setVariable ["pos_mine", _pos_mine, true];
                            	missionNamespace setVariable ["pos_mineAT", _pos_mineAT, true];
                            	{ 
                                if (side player == side_player_miner) then {
	
                            	_mn = missionNamespace getVariable ["mn",[]];
                            	_nm = missionNamespace getVariable ["nm",[]];
                            	_pos_mine = missionNamespace getVariable ["pos_mine",[]];
                            	_pos_mineAT = missionNamespace getVariable ["pos_mineAT",[]];	
	
                            	_markern = format[ "markern_%1", str (_mn+1)];	
                            	_markerstr = createMarkerLocal [_markern,_pos_mine];	
                            	_markerstr setMarkerShapeLocal "ICON"; 
                            	_markerstr setMarkerTypeLocal "hd_dot"; 
                            	_markerstr setMarkerColorLocal "ColorRed";
	
                            	_markernAT = format[ "markernAT_%1", str (_mn+1)];	
                            	_markerstrAT = createMarkerLocal [_markernAT,_pos_mineAT];	
                            	_markerstrAT setMarkerShapeLocal "ICON"; 
                            	_markerstrAT setMarkerTypeLocal "hd_dot"; 
                            	_markerstrAT setMarkerColorLocal "ColorBrown";
                            	hint format ["Встановлено мін: ПП %1 шт.| ПТ %1 шт.", str (_nm+1)];
                            	};
                            	} remoteExec ["bis_fnc_call", 0, true];
                            	};
                            	_nm=_nm+1;
                            	_mn = _mn + 1;
                                missionNamespace setVariable ["MarkN", _mn, true];
                            	sleep 0.01;
                            	};
                             };
//////////////////////////////////////////////////////////////////////////////////////////////
// PLYER LOCAL
// Зазначаємо перемінну MarkN
_MarkerNamber = 0;
missionNamespace setVariable ["MarkN", _MarkerNamber, true];
private ["_al_ied_trigger","_al_show","_al_show_marker","_al_mine","_IED_blow_trigger","_mark_current","_array_temp","_field_center","_field_radius","_nclass_mines","_number_mines","_marker_mines","_player_miner","_debugs_mines","_nm","_markern","_markerGlobal","_pos_mine","_markerstr","_count_mark","_array_markers","_mn"];

//Засускаємо петлю на кожному компютері, що підключається
//Перевіряємо чи являється комютер, що підключився _miner - якщо так то виконуємо скрипт петлі. Скрипт петлі перевіряє скільки залишилось поінтів якщо нуль то видаляється актіон у гравця _miner і петля зупиняється
waitUntil {vehicleVarName player isEqualTo _miner}; 


//Якщо гравець _miner і поінти на мінні поля більші за нуль то даємо йому актіон Інженрні загородження
//	Аргументи, що передаються у функцію fn_IZ, де перший аргумент _miner доступний через (_this select 3) select 0 --- [_miner, _MarkerMinefield, _RadiusMinefield, _TypeMinesPP, _TypeMinesAT, _CountMines, _GlobalMarkerMinefield, player] 
if (vehicleVarName player isEqualTo _miner and alive player) then {act = player addAction ["Інженерні загородження", fn_IZ, [_miner, _MarkerMinefield, _RadiusMinefield, _TypeMinesPP, _TypeMinesAT, _CountMines, _GlobalMarkerMinefield, side player], 1, true, true, "", "_this distance _target < 0.1"];};

// Якщо закінчилися поінти на мінні поля або закінчився фрізтайм видаляємо актіон Інженрні загородження
_y = true;
while {_y} do {
pointer = missionNamespace getVariable ["MineFieldPoints",[]];
if (pointer isEqualTo 0 or WMT_pub_frzState > 1) then {
if (vehicleVarName player isEqualTo _miner) then {player removeAction act;};
_y = false;
};
sleep 1;
};
				};
			};
		};