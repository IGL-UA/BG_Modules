/*
 	Name: BG_fn_InitResedenture

 	Author(s):	IGL
*/
#include "definesBG.sqf"

PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;

if(_activated) then {
	//===============================================================
	// 							Виконання на Сервері
	//===============================================================
	if(isServer) then {
			PR(_logic) = _this select 0;
			PR(_delay) = _this select 1;
			
			PR(_sidePoshuku) = [east, west, independent, civilian, 0] select (_logic getVariable "sidePoshuku");
			PR(_RadiusSpracuvannya) = _logic getVariable "RadiusSpracuvannya";
			PR(_UmovaResidenture) = _logic getVariable "UmovaResidenture";
			PR(_ObjectSyncGroup) = synchronizedObjects _logic;
			
			if ( {_x isKindOf "Man"} count synchronizedObjects _logic == 0) then {nil} else {
			//Створюємо масив на сервері та обявляємо його для всіх
			mista = [];
			//Створюємо функцію 
			fn_module_residenture = {
			_perevirka = 5;
			if (count nearestLocations [getpos leader group (_this #0), ["NameVillage", "NameCity", "NameCityCapital"], _this #2] > 0 and getpos leader group (_this #0) distance (nearestLocations [getpos leader group (_this #0), ["NameVillage", "NameCity", "NameCityCapital"], _this #2] #0) <= _this #2) then {
			if (count mista > 0) then {
			{
			if (text (nearestLocations [getpos leader group (_this #0), ["NameVillage", "NameCity", "NameCityCapital"], _this #2] #0) isEqualTo _x) exitWith {_perevirka = 1;};
			} foreach mista;
			if (_perevirka == 1) exitWith {};
			if (_perevirka == 5) exitWith {
			//Хінт для синіх (поміняти сторону якщо шо)	
			parseText format ["<t color='#33cc33' size='1.2' shadow='1' shadowColor='#000000' align='center'>Група була помічена біля</t> <br/> <t color='#ffea00' size='1.2' shadow='1' shadowColor='#000000' align='center'>н.п. %1</t>", text (nearestLocations [getpos leader group (_this #0), ["NameVillage", "NameCity", "NameCityCapital"], _this #2] #0)] remoteExec ["hint", _this #1];	
			mista append [text (nearestLocations [getpos leader group (_this #0), ["NameVillage", "NameCity", "NameCityCapital"], _this #2] #0)];
			};
			} else {
			if (_perevirka == 5) exitWith {
			//Хінт для синіх (поміняти сторону якщо шо)	
			parseText format ["<t color='#33cc33' size='1.2' shadow='1' shadowColor='#000000' align='center'>Група була помічена біля</t> <br/> <t color='#ffea00' size='1.2' shadow='1' shadowColor='#000000' align='center'>н.п. %1</t>", text (nearestLocations [getpos leader group (_this #0), ["NameVillage", "NameCity", "NameCityCapital"], _this #2] #0)] remoteExec ["hint", _this #1];
			mista append [text (nearestLocations [getpos leader group (_this #0), ["NameVillage", "NameCity", "NameCityCapital"], _this #2] #0)];
			};
			};
			};	
	
			};
            //Додаткова умова запуску резидентури (наприклад після знищення якогось обєкта)
			waitUntil compile _UmovaResidenture;
			//Запускаємо функцію
			_str = true;
			while {_str} do { 
			[_ObjectSyncGroup #0, _sidePoshuku, _RadiusSpracuvannya] call fn_module_residenture;
			sleep 5;
			};
		};
		};	
	};