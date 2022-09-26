KeyFunctions = [//dik	//shift	//ctrl	//alt
		[[35,	true,	false,	false], "holster.sqf"],

while {isNull(findDisplay 46)} do {sleep 0}];
(findDisplay 46) displayAddEventHandler ["KeyDown", {
	private _kpd = _this select [1, 4];
	{_x params ["_key", "_scr"]; if (_key isEqualTo _kpd) exitWith {execVM _scr; true}; false;
	} forEach KeyFunctions;
}];