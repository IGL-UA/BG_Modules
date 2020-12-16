_this spawn {
	waitUntil {!isNull (findDisplay 12 displayCtrl 51)} ;
	_map = (findDisplay 12 displayCtrl 51) ;

	addMissionEventHandler ["Map",{
		_disp = (findDisplay 12) ;
		_map = (_disp displayCtrl 51) ;
		{
			if (ctrlIDC _x in [20001,20002,10001,10002]) then {_x ctrlShow false} ;
		} forEach allControls _disp ;
		for "_i" from 0 to 100 do {
			(_disp displayCtrl (30000 + _i)) ctrlShow false ;
			(_disp displayCtrl (40000 + _i)) ctrlShow false ;
		} ;
}] ;
};