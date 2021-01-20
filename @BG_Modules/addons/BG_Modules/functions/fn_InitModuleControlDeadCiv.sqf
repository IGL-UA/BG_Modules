/*
 	Name: BG_fn_InitControlDeadCiv

 	Author(s):
		IGL
*/

#include "definesBG.sqf"

PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;

if(_activated) then {
	//===============================================================
	// 			Виконання на Сервері
	//===============================================================
	if(isServer) then {
	    {
	    // Якщо юніт цивільний і не гравець присвоюємо йому EventHandler який спрацьомує при знищенні
            if (side _x == CIVILIAN and not isPlayer _x) then {
				_x addMPEventHandler ["MPKilled", {
	                params ["_unit", "_killer", "_instigator", "_useEffects"];
					// Якщо компютер має монітор (тобто це не сервер) виконуємо далі
					if (hasInterface) then {
					// Ці дві функції вираховують час	
					_addzero = {
						if (_this < 10) then {
							"0" + str _this;
						} else {
							str _this;
						};
					};
					_getFormatedTime = {
						_time =  _this;
						_hour = floor(abs(_time)/3600);
						_minute = floor(abs(_time)/60)%60;
						_second = round(abs(_time)%60);
						format ["%1:%2:%3 ", _hour call _addzero, _minute call _addzero, _second call _addzero];
					};
					// Це роздільна лінія
					_sep = "<img image='#(argb,8,8,3)color(1,1,1,0.1)' height='2' width='512' />";
					// Системний час компютера
					_currentTime = systemTime;
					_systemTime = format ["(%1:%2:%3): ", _currentTime #3, _currentTime #4 , _currentTime #5];
					// Якщо вбивця - гравець виходимо з наступним: беремо його ім'я з відповідним кольором і створюємо завдання у відповідний пункт. 
					if (isPlayer _killer) exitWith {
						switch (side _killer) do {
							case west: {
								_nameKiller = format["<font color='#FF004C99'>%1</font>  знищив цивільного.", name _killer];
								private _description = format [(time call _getFormatedTime) + (_systemTime) + (_nameKiller) + (_sep)];
								player createDiaryRecord ["ControlDeadCiv", ["Повідомлення по інцидент", _description]];
							};
							case east: {
								_nameKiller = format["<font color='#FF800000'>%1</font>  знищив цивільного.", name _killer];
								private _description = format [(time call _getFormatedTime) + (_systemTime) + (_nameKiller) + (_sep)];
								player createDiaryRecord ["ControlDeadCiv", ["Повідомлення по інцидент", _description]];
							};
							case independent: {
								_nameKiller = format["<font color='#FF008000'>%1</font>  знищив цивільного.", name _killer];
								private _description = format [(time call _getFormatedTime) + (_systemTime) + (_nameKiller) + (_sep)];
								player createDiaryRecord ["ControlDeadCiv", ["Повідомлення по інцидент", _description]];
							};
							case civilian: {
								_nameKiller = format["<font color='#FF660080'>%1</font>  знищив цивільного.", name _killer];
								private _description = format [(time call _getFormatedTime) + (_systemTime) + (_nameKiller) + (_sep)];
								player createDiaryRecord ["ControlDeadCiv", ["Повідомлення по інцидент", _description]];
							};
						};
					};
		    // Якщо вбивця - НЕ гравець виходимо з наступним: пишимо що дехто це зробив і замів сліди і створюємо завдання у відповідний пункт.
                    if !(isPlayer _killer) exitWith {
						_nameKiller = "<font color='#FFB29900'> Дехто вбив цивільного і замів сліди.</font>";
						private _description = format [(time call _getFormatedTime) + (_systemTime) + (_nameKiller) + (_sep)];
						player createDiaryRecord ["ControlDeadCiv", ["Повідомлення по інцидент", _description]];
					};

					};
                }];
            }
        } foreach allUnits;
	};
	//===============================================================
	// 		        Виконання локально
	//===============================================================	
	if(!isDedicated) then {
	// Створюємо відповідний пункт у кожного гравця
        _index = player createDiarySubject ["ControlDeadCiv","Цивільний контроль"];
		
    };		
};
