/*
 	Name: BG_fn_InitModuleZonaNotMines

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
			PR(_markerStr)  = _logic getVariable "MarkerZonaNotMines";
			PR(_sideUnits)	= ["east","west","independent","civilian","side player"] select (_logic getVariable "SideOwnerZNM");
			
			// Видалення пробілів, додавання кавичок.
			_markerStr = toString ((toArray _markerStr) - [32]);
			PR(_arrMarkers) = [_markerStr,","] call Bis_fnc_splitString;
			PR(_brush) 		= if(count _arrMarkers == 1)then{"SolidBorder"}else{"Solid"};
			
fnc_mineMessage = {
hint parsetext format ["<t color='#ff0000' size='1' align='center'>Встановлення мін в цій зоні</t><br/><t color='#ffea00' size='1' align='center'>ЗАБОРОНЕНО!</t><br/>Міна деактивована"];
};



player addEventHandler [ "AnimChanged", format ['

_thread = [_this, %1] spawn {
	_unit = (_this select 0) select 0;
	_animState = (_this select 0) select 1;

	if ( [ "putdown", _animState ] call BIS_fnc_inString ) then {
{
		if (_unit inArea _x and side _unit == %2) then {
		_mines = ( _unit nearObjects [ "TimeBombCore", 3.5 ] ) + ( _unit nearObjects [ "MineBase", 3.5 ] );
		_mineInfo = [];
		{
			_gwh = nearestObjects [ _x, [ "GroundWeaponHolder" ], 1 ];
			_mineInfo pushBack [ typeOf _x, _x, getPosATL _x, _gwh ];
		} forEach _mines;
		waitUntil { !( _animState isEqualTo ( animationState _unit ) ) };
		sleep 0.5;

		_found = false;
		{
			if !( isNull _x ) then {
				_mineType = ( _mineInfo select _forEachIndex ) select 0;
				_mineID = ( _mineInfo select _forEachIndex ) select 1;
				_minePos = ( _mineInfo select _forEachIndex ) select 2;
				_oldgwh = ( _mineInfo select _forEachIndex ) select 3;
				_magClass = getText ( configFile >> "CfgAmmo" >> _mineType >> "defaultMagazine" );
				if !(_found) then {
				player action ["Deactivate", player,  _mineID];	
				[] call fnc_mineMessage;
				_found = true;
				};
			};

			if ( _found ) exitWith {};
		} forEach _mines;

	
	};	
} foreach (_this select 1);
};
};
', _arrMarkers, _sideUnits]];

			};

				};
			};