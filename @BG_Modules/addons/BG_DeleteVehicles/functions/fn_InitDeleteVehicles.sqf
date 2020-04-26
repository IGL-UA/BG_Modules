/*
 	Name: BG_fn_InitDeleteVehicles

 	Author(s):	IGL
*/

#include "defines.sqf"

PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;

if(_activated) then {
	//================================================================
	// 							Виконання на Сервері
	//================================================================
	if(isServer) then {
// Беремо змінні що можуть встановлюватися користувачем у модулі
PR(_radius) = _logic getVariable "Radius";
PR(_timerun) = _logic getVariable "TimeRun";	
// Оголошуємо змінну для одноразового запуску скрипта і уникненню повторного	
zminna = 1;
publicVariable "zminna";
//Час фрізтайму після якого запускається запис командирів і техніки в радіусі біля них
waituntil {sleep 1; WMT_pub_frzTimeLeft < _timerun};  
_allMasive = [];
{
if (isFormationLeader _x) then {_allMasive append [[_x]];
// 20 - це радіус в якому буде привязуватися до командира техніка коли час фрізтайму стане меншим 240 сек
nObject = nearestObjects [_x, ["Car", "Tank", "Air"], _radius]; 
_allMasive select ((count _allMasive) - 1) pushBack (nObject select 0);
};
} forEach playableUnits;
allMasive = _allMasive;
publicVariable "allMasive";
//Чекаємо поки завершиться фрізтайм та видаляться не зайняті гравцями боти і продовжуємо скрипт
waitUntil {sleep 1; WMT_pub_frzState > 1};
sleep 2;
// видаляємо техніку де не має екіпажу та командирів підрозділів 
if (zminna == 1) then {

        if (zminna == 1 and isServer) then {
        {
           if (isNull (_x select 0)) then {
                                (_x select 1) remoteExec ["deleteVehicle"];
							   };
        } forEach allMasive;
		
zminna = 2;
publicVariable "zminna";
} else {nil};
} else {nil}; 

	};
};