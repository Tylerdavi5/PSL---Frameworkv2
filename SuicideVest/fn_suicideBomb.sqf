// https://www.altisliferpg.com/topic/328-tutorial-suicide-vest/
#include "..\..\script_macros.hpp"
/*
    ALAH SNACKBAR! 
*/
private["_boom", "_list"];
_player = player;
if(vest player != "V_HarnessOGL_gry") exitWith {};
if(life_isSuicide) exitWith {};
life_isSuiciding = true;

_player say3D "akbar";
sleep 8;


if(vest player != "V_HarnessOGL_gry") exitWith {life_isSuiciding = false;};
if((player getVariable "restrained")) exitWith {life_isSuiciding = false;}; //He's restrained.
if((player getVariable "zipted")) exitWith {life_isSuiciding = false;}; //He's restrained.

//BOOM    
removeVest player;
removeAllWeapons player:
removeAllAssignedItems player;
_boom = "Bo_Mk82" createVehicle [0,0,9999];
_boom setPos (getPos player);
_boom setVelocity [100,0,0];

if(alive player) then {player setDamage 1;};

life_isSuicide = false;

player setVariable["zipted", false, true];
player setVariable["restrained", false, true];
[] call SOCK_fnc_updateRequest;

[0,format["BREAKING NEWS: A suicide vest was detonated by %1!",profileName]] remoteExec ["life_fnc_broadcast",0];
//open configuration.sqf and in the backend variables add "life_isSuiciding = false;"
//open fn_setupActions.sqf and add under "case civilian"
// //Suicide alahsnackbar
		//life_actions = life_actions + [player addAction["<t color='#FF0000'>Activate Suicide Vest</t>",life_fnc_suicideBomb,"",0,false,false,"",' vest player == "V_HarnessOGL_gry" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];
		//open "functions.hpp" under "class actions" add class suicideBomb {};
		//open description.ext and under "class CfgSounds" add
		//class akbar
  //  {
    //    name = "akbar";
  //      sound[] = {"\sounds\akbar.ogg",1.0, 1};
    //    titles[] = {};
  //  };
  //Then download the sound file from below and add it to your sounds folder. And that's it. The vest is set to "V_HarnessOGL_gry" but you can change it to what ever you want.