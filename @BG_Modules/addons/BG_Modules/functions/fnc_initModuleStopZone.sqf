/*
 	Name: BG_fnc_initModuleStopZone

 	Author(s):	IGL
*/
#include "defines.sqf"

PR(_logic) = [_this,0,objNull,[objNull]] call BIS_fnc_param;
PR(_units) = [_this,1,[],[[]]] call BIS_fnc_param;
PR(_activated) = [_this,2,true,[true]] call BIS_fnc_param;

if(_activated) then {
	if(!isDedicated) then {
		
				[_logic, _units, DELAY] spawn {
			PR(_logic) = _this select 0;
			PR(_units) = _this select 1;
			PR(_delay) = _this select 2;
			PR(_markerStr) 	= _logic getVariable "Marker";
			PR(_owner)		= ["east","west","independent","civilian",sideLogic] select (_logic getVariable "Owner");
			PR(_message)	= _logic getVariable "Message";
			PR(_messageTwo)	= _logic getVariable "MessageTwo";
			PR(_minHeight)	= _logic getVariable "MinHeight";
			PR(_maxHeight)	= _logic getVariable "MaxHeight";
			PR(_timeStopArea)	= _logic getVariable "TimeStopArea";
			PR(_timeBLACKIN)	= _logic getVariable "TimeBLACKIN";
			PR(_condition) = compile (_logic getVariable ["Condition","true"]);


			fn_blind = {
				    myvalue = _this #1;
				    deadtime = _this #2 / 2;
				    _y = true;
					_text = format ["<t color='#ff0000' size='5' shadow='1' shadowColor='#000000' align='center'>%1</t><br/><t color='#ffea00' size='3' shadow='1' shadowColor='#000000' align='center'>%2</t>", _this #3, _this #4];
				    while {_y} do {
				    myvalue = myvalue - 1;
				    deadtime = deadtime - 1;
				    _b = player inArea _this #0;
				    if (myvalue > 1 and _b) then {
				    cutText [_text,"PLAIN", -1, false, true];
				    };
				    if (myvalue < 1 and _b) then {
				    cutText [_text,"BLACK OUT", -1, false, true];
				    };
				    if (_b) then {_y = true;} else {_y = false; cutText ["","BLACK IN"];};
				    if (_b and deadtime < 1) then {_y = false; cutText ["","BLACK IN"]; };
				    sleep 2;
				    };
				    waituntil {deadtime == 0};
				    sleep 5; 
				    "Arta" remoteExec ["playSound"];
				    sleep 3;
				    "Bo_GBU12_LGB" createVehicle getpos player;
				    sleep 3;
				    player setdamage 1;
				    };


			PR(_func_create_trigger) = {
				private ["_trigger","_marker","_markerPos","_markerDir"];
				_marker = _this select 0;
				_markerPos = markerPos _marker;
				_markerDir = markerDir _marker;
				_markerSize = markerSize _marker;
				_isRectangle = (markerShape _marker) == "RECTANGLE";
                _umova = format ["side player == %1 and (vehicle player) inArea thisTrigger or side player == %1 and player inArea thisTrigger", _owner];
				_OnActivation = format ['[thisTrigger, %1, %2, "%3", "%4"] spawn fn_blind;', _timeBLACKIN, _timeStopArea, _message, _messageTwo];
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

				
				_marker setMarkerBrush _brush;

				_arrTrgs set [count _arrTrgs, ([_marker] call _func_create_trigger)];
			};
			BG_Global = _arrTrgs;
			publicVariable "BG_Global";
				};			
			
			};

		};