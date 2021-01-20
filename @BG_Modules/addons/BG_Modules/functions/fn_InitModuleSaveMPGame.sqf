/*
 	Name: BG_fn_InitModuleSaveMPGame

 	Author(s):
		IGL
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

	};
	//===============================================================
	// 							Виконання локально
	//===============================================================	
	if(!isDedicated) then {
		    PR(_logic) = _this select 0;
	        waitUntil {!isnull player};
			if ( {_x isKindOf "Man"} count synchronizedObjects _logic == 0 or {_x isKindOf "Man"} count synchronizedObjects _logic > 1) then {
				nil
			} else {
				if (isMultiplayer) then {
					if (getPlayerUID player == getPlayerUID ((synchronizedObjects _logic)#0)) then {
             	       _action = ["Зберегти МР гру","Відкрити меню","BG_Modules\pic\saveMPgame.paa",{_handle = createdialog "open_menu_BGSaveGame"}, {true}] call ace_interact_menu_fnc_createAction;
             	       [(typeOf ((synchronizedObjects _logic)#0)), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
					} else {nil};		
				};				
			};
    };		
};