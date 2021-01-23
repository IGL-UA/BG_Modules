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
	// 	              Виконання на Сервері
	//===============================================================
	if(isServer) then {
	    {
	    // Якщо юніт цивільний і не гравець присвоюємо йому EventHandler який спрацьомує при знищенні
            if (side _x == CIVILIAN and not isPlayer _x) then {
				// Додаємо до об'єкта Event
				_x addMPEventHandler ["MPKilled", {
	                params ["_unit", "_killer", "_instigator", "_useEffects"];
					// Перевіряємо чи кілер дорівнює нулю, якщо так - беремо останнього хто наніс пошкодження, якщо ні - лишаємо так як є
					_killer = if (isNull _killer) then { _unit getVariable ["ace_medical_lastDamageSource", _killer] } else { if (side _killer == civilian) then { _unit getVariable ["ace_medical_lastDamageSource", _killer] } else { _killer } };
					// Беремо значення унікальної змінної
				    _runonce = _unit getVariable ["runOnes", if (isNull _killer) then { true } else { if (isPlayer _killer) then { true } else { false }}];
					hint format ["killer: %1 | side: %2 | isNull: %3", _killer, side _killer, isNull _killer];
					// Якщо компютер має монітор (тобто це не сервер) і змінна _runonce = true то виконуємо далі
					if (hasInterface and _runonce) exitWith {
					// Створюємо локально змінну прикріпляємо її до missionNamespace встановлюємо її значення false (для запобігання подвійному виконанню скрипта - це баг EventHandler "MPKilled" і АСЕ3 )	
                    _unit setVariable ["runOnes", false, false];
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
					// Якщо кілер - не дорівнює нулю виходимо з наступним: беремо його ім'я з відповідним кольором і створюємо завдання у відповідний пункт, якщо дорівнює нулю - це означає, що по АСЕ функції також не вдалося взяти хто кілер пишимо "Дехто вбив..."
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
							case sideEnemy: {
								_nameKiller = format["<font color='#FFB29900'>%1</font>  знищив цивільного.", name _killer];
								private _description = format [(time call _getFormatedTime) + (_systemTime) + (_nameKiller) + (_sep)];
								player createDiaryRecord ["ControlDeadCiv", ["Повідомлення по інцидент", _description]];
							};
							case sideUnknown: {
								// Якщо вбивця - НЕ гравець виходимо з наступним: пишимо що дехто це зробив і замів сліди і створюємо завдання у відповідний пункт.
								_nameKiller = "<font color='#FFB29900'> Дехто вбив цивільного і замів сліди.</font>";
								private _description = format [(time call _getFormatedTime) + (_systemTime) + (_nameKiller) + (_sep)];
								player createDiaryRecord ["ControlDeadCiv", ["Повідомлення по інцидент", _description]];
							};
							case sideEmpty: {
								// Якщо вбивця - НЕ гравець виходимо з наступним: пишимо що дехто це зробив і замів сліди і створюємо завдання у відповідний пункт.
								_nameKiller = "<font color='#FFB29900'> Дехто вбив цивільного і замів сліди.</font>";
								private _description = format [(time call _getFormatedTime) + (_systemTime) + (_nameKiller) + (_sep)];
								player createDiaryRecord ["ControlDeadCiv", ["Повідомлення по інцидент", _description]];
							};
						};
					};
				}];
            };
        } foreach allUnits;
	};
	//===============================================================
	// 	                Виконання локально
	//===============================================================	
	if(!isDedicated) then {
		// Створюємо відповідний пункт у кожного гравця
        _index = player createDiarySubject ["ControlDeadCiv","Цивільний контроль"];
		
    };		
};
