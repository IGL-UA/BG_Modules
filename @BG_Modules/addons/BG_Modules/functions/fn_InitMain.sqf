/*
 	Name: BG_fn_InitMain

 	Author(s):	IGL
*/

#include "definesBG.sqf"

PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;

if(_activated) then {

	if(isServer) then {
	//================================================================
	// 							Виконання на Сервері
	//================================================================
	};
	
	if(!isDedicated) then {
	
	enableSaving [false, false];
	disableRemoteSensors true;
	TF_give_personal_radio_to_regular_soldier = true;
	TF_no_auto_long_range_radio = true;
	waituntil {!isnil "bis_fnc_init"};
	[] call wmt_fnc_briefingmap;

	waitUntil {!isnull player};
	//Вимикаємо стандартну систему втоми 
	player enableStamina false;
	// Налаштовуємо спектратор		
	if (side player == west) then { 
	[[west], [east,independent]] call ace_spectator_fnc_updateSides;
	[[1], [0,2]] call ace_spectator_fnc_updateCameraModes;
	}; 
	if (side player == east) then { 
	[[east], [west,independent]] call ace_spectator_fnc_updateSides;
	[[1], [0,2]] call ace_spectator_fnc_updateCameraModes;
	};
	if (side player == independent) then {  
	[[independent], [west,east]] call ace_spectator_fnc_updateSides;
	[[1], [0,2]] call ace_spectator_fnc_updateCameraModes; 
	};
    // Налаштовуємо якість поверхні (щоб не було прозорих горбів)
	setTerrainGrid 25;
	};
};