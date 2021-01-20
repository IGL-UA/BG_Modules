/*
 	Name: BG_fnc_initModuleHospital

 	Author(s):	IGL
*/
#include "definesBG.sqf"

PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;

if(_activated) then {
	if(!isDedicated) then {
		
				[_logic, _units, DELAY] spawn {
			PR(_logic) = _this select 0;
			PR(_units) = _this select 1;
			PR(_delay) = _this select 2;
			PR(_markerStr) 	= _logic getVariable "MarkerHospital";
			PR(_owner)		= ["east","west","independent","civilian","side player"] select (_logic getVariable "SideOwner");
			PR(_minHeight)	= _logic getVariable "MinHeightHospital";
			PR(_maxHeight)	= _logic getVariable "MaxHeightHospital";

			fn_hospital = {
					_unitName = name player;
					_damageVar = player getvariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0]]; 
					    _var1 = 1 - (_damageVar select 0);  
					    _var2 = 1 - (_damageVar select 1); 
					    _var3 = 1 - (_damageVar select 2); 
					    _var4 = 1 - (_damageVar select 3); 
					    _var5 = 1 - (_damageVar select 4); 
 					    _var6 = 1 - (_damageVar select 5); 
					    _damageShow = ((_var1 + _var2 + _var3 + _var4 + _var5 + _var6) * 100)/6; 
					if !(_damageShow == 100) then {
					hint parseText format ["%1 вилікувано!", _unitName];
					[player] call ace_medical_treatment_fnc_fullHealLocal;
					} else {
					hint parseText format ["%1 ти здоровий! <br/> Приходь як щось болітиме.", _unitName];
					};
				    };


			PR(_func_create_trigger) = {
				private ["_trigger","_marker","_markerPos","_markerDir"];
				_marker = _this select 0;
				_markerPos = markerPos _marker;
				_markerDir = markerDir _marker;
				_markerSize = markerSize _marker;
				_isRectangle = (markerShape _marker) == "RECTANGLE";
                _umova = format ["side player == %1 and (vehicle player) inArea thisTrigger or side player == %1 and player inArea thisTrigger", _owner];
				_OnActivation = format ['[thisList] spawn fn_hospital;'];
				_trigger = createTrigger ["EmptyDetector", [_markerPos select 0,_markerPos select 1] ];
				_trigger setTriggerArea  [_markerSize select 0,_markerSize select 1,_markerDir,_isRectangle];
				_trigger setTriggerActivation[str _owner,"PRESENT",true];
			    _trigger setTriggerStatements [_umova, _OnActivation, ""];
				_trigger
			};
			
			// Видалення пробілів?
			_markerStr = toString ((toArray _markerStr) - [32]);

			PR(_arrMarkers) = [_markerStr,","] call Bis_fnc_splitString;
			PR(_arrTrgs)	= [];
			PR(_brush) 		= if(count _arrMarkers == 1)then{"SolidBorder"}else{"Solid"};

			// Створення тригерів
			for "_i" from 0 to ((count _arrMarkers)-1) do {
				PR(_marker) = _arrMarkers select _i;

				
			//	_marker setMarkerBrush _brush;

				_arrTrgs set [count _arrTrgs, ([_marker] call _func_create_trigger)];
			};
				};
			};
		};