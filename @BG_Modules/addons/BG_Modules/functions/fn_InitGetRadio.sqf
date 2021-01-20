/*
 	Name: BG_fn_InitGetRadio

 	Author(s):	IGL
*/

#include "definesBG.sqf"

PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;

if(_activated) then {
	//================================================================
	// 							Виконання на клієнті
	//================================================================
	if(!isDedicated) then {
	PR(_RadioWest)		= ["tf_anarc210","tf_rt1523g","tf_rt1523g_big","tf_rt1523g_big_bwmod","tf_rt1523g_big_bwmod_tropen","tf_rt1523g_big_rhs","tf_rt1523g_black","tf_rt1523g_bwmod","tf_rt1523g_fabric","tf_rt1523g_green","tf_rt1523g_rhs","tf_rt1523g_sage", "nil"] select (_logic getVariable "RadioWest");
	PR(_RadioEast)		= ["tf_mr3000","tf_mr3000_bwmod","tf_mr3000_bwmod_tropen","tf_mr3000_multicam","tf_mr3000_rhs","tf_mr6000l", "nil"] select (_logic getVariable "RadioEast");
	PR(_RadioGuer)		= ["tf_anarc164","tf_anprc155","tf_anprc155_coyote","nil"] select (_logic getVariable "RadioGuer");
	PR(_RadioCiv)		= ["tf_anarc164","tf_anarc210","tf_anprc155","tf_anprc155_coyote","tf_mr3000","tf_mr3000_bwmod","tf_mr3000_bwmod_tropen","tf_mr3000_multicam","tf_mr3000_rhs","tf_mr6000l","tf_rt1523g","tf_rt1523g_big","tf_rt1523g_big_bwmod","tf_rt1523g_big_bwmod_tropen","tf_rt1523g_big_rhs","tf_rt1523g_black","tf_rt1523g_bwmod","tf_rt1523g_fabric","tf_rt1523g_green","tf_rt1523g_rhs","tf_rt1523g_sage", "nil"] select (_logic getVariable "RadioCiv");

			[_logic, _RadioWest, _RadioEast, _RadioGuer, _RadioCiv] spawn {
				PR(_logic) = _this #0;
				PR(_RadioWest) = _this #1;
				PR(_RadioEast) = _this #2;
				PR(_RadioGuer) = _this #3;
				PR(_RadioCiv)  = _this #4;
                waitUntil {!isnull player};
				//Видаємо командирам рації (необхідно вимкнути автоматичну вичачу радіостанцій у TasckForce)
				if (isFormationLeader player and side player == west and _RadioWest != "nil") then {
				_BackPackLoadout = getUnitLoadout player #5;
				//removeBackpack player; // Якщо не коментувати то буде видаляти рюкзак який падає під ноги з інвентарьом
				player addBackpack _RadioWest; 
				player setUnitLoadout [[],[],[],[],[],_BackPackLoadout,"","",[],[]]; 
				};
				if (isFormationLeader player and side player == east and _RadioEast != "nil") then {
				_BackPackLoadout = getUnitLoadout player #5;
				//removeBackpack player; // Якщо не коментувати то буде видаляти рюкзак який падає під ноги з інвентарьом
				player addBackpack _RadioEast; 
				player setUnitLoadout [[],[],[],[],[],_BackPackLoadout,"","",[],[]]; 
				};
				if (isFormationLeader player and side player == independent and _RadioGuer != "nil") then {
				_BackPackLoadout = getUnitLoadout player #5;
				//removeBackpack player; // Якщо не коментувати то буде видаляти рюкзак який падає під ноги з інвентарьом
				player addBackpack _RadioGuer; 
				player setUnitLoadout [[],[],[],[],[],_BackPackLoadout,"","",[],[]]; 
				};
				if (isFormationLeader player and side player == civilian and _RadioCiv != "nil") then {
				_BackPackLoadout = getUnitLoadout player #5;
				//removeBackpack player; // Якщо не коментувати то буде видаляти рюкзак який падає під ноги з інвентарьом
				player addBackpack _RadioCiv; 
				player setUnitLoadout [[],[],[],[],[],_BackPackLoadout,"","",[],[]]; 
				};
			};
		
	};
};