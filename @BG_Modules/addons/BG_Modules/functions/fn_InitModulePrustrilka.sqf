/*
 	Name: BG_fn_InitModulePrustrilka

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
			PR(_logic) = _this select 0;
			PR(_delay) = _this select 1;
			if ( {_x isKindOf "StaticWeapon"} count synchronizedObjects _logic == 0) then {
            nil
			} else {
			_nomerUstanovku = 0;
			_bazaPrustril = [];
			{
				_bazaPrustril append [[_x]];
			
    			              _nomerUstanovku = _nomerUstanovku + 1;
							  _markersprGun = format[ "PR_USTANOVKA_%1", _nomerUstanovku];
							  _markerspr = format[ "PR_SNARYAD_%1", _nomerUstanovku];
							  _markersprGunMarkerText = format[ "Установка %1", _nomerUstanovku];
							  _markersprMarkerText = format[ "Снаряд %1", _nomerUstanovku];
							  
                              sprGun = createMarker [_markersprGun, getpos _x];
                              sprGun setMarkerType "mil_triangle";
                              sprGun setMarkerText _markersprGunMarkerText;
                              sprGun setMarkerColor "ColorRed";
				_bazaPrustril select ((count _bazaPrustril) - 1) pushBack (_markersprGun);

                              spr = createMarker [_markerspr, getpos _x];
                              spr setMarkerType "waypoint";
                              spr setMarkerText _markersprMarkerText;
                              spr setMarkerColor "ColorWhite";
				_bazaPrustril select ((count _bazaPrustril) - 1) pushBack (_markerspr);
				
							  if (_bazaPrustril select ((count _bazaPrustril) - 1) select 0 == _x) then {
							  _sprName = _bazaPrustril select ((count _bazaPrustril) - 1) select 2;

                              _x addEventHandler ["Fired", format ["
                              _null = [_this, '%1'] spawn {
                              _missil = (_this select 0) select 6;
                              waitUntil {
                              if (isNull _missil) exitWith {true};
							  
                              _this select 1 setMarkerPos (getpos _missil);
							  
                              false 
                              };
                              sleep 0.4;
                              };
                              ", _sprName]]; 
							  };

			} foreach synchronizedObjects _logic;			
			
			};
			
	};
	//===============================================================
	// 							Виконання локально
	//===============================================================	
	if(!isDedicated) then {
		    PR(_logic) = _this select 0;
	        waitUntil {!isnull player};
			if ( {_x isKindOf "StaticWeapon"} count synchronizedObjects _logic == 0) then {
			sleep 10;
            //Показуємо чорний екран з виводом помилки синхронізації по гравцям
			cutText ["<t color='#ff0000' size='2' shadow='1' shadowColor='#000000' align='center'>Збій синхронізації модуля пристрілки озброєння!</t><br/><t color='#ffea00' size='2' shadow='1' shadowColor='#000000' align='center'>Не синхронізовано жодного стаціонарного озброєння!</t>","BLACK OUT", -1, false, true];
			} else {
			hint parsetext format ["<t color='#58FA58' size='1' align='center'>Модуль пристрілки увімкнено!</t>"];	
			};
    };		
};