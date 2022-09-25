params ["_player"]; //value passed to this script

//removeAllWeapons _player;

diag_log("EXECUTED!");

_player addAction ["Do Damag", "(_this select 0) setDamage 0.75;"];
_player addAction ["Heal",  "[(_this select 0)] execVM 'heal.sqf';"];
player addAction ["blow dis bitch up!", execVM "functions\explode.sqf"];