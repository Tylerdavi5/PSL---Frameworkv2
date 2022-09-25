params ["_unit","_isJIP"];


if (!_isJIP) then {
 [_unit] call compile preProcessFileLineNumbers "functions\fn_playerSpawn.sqf";
};

if (_isJIP) then {};