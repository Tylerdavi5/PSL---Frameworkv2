// open Altis_Life.Altis\config\Config_vItems.hpp and add the below script

class bandage {
	variable = "bandage";
	displayName = "STR_Item_Bandage";
	weight = 1;
	buyPrice = 750;
	sellPrice = 350;
	illegal = false;
	edible = -1;
	drinkable = -1;
	icon = "icons\ico_bandages.paa";
};
// open Altis_Life.Altis\functions.hpp and add the below around line 260
class bandage {};
// open Altis_Life.Altis\config\Config_Master.hpp at the bottom add
#include "Toxic_config_bandage.hpp"
// open Altis_Life.Altis\core\pmenu\fn_useitem.sqf and add

case "bandage": {
	[] spawn life_fnc_bandage;
	closeDialog 0;
};
// open Altis_Life\core\functions\fn_keyHandler.sqf and add the below
			   //shift 0 (zero)
case 11: {
	if (_shift) then{
		[] spawn life_fnc_bandage;
	};
};
	   // open Altis_life.Altis\stromgtable.xml and add the stuff under "life_items" paste the below in there
	   <Key ID = "STR_Item_Bandage">
		   <Original>Bandage< / Original>
		   < / Key>
		   // go to Altis_Life.Altis\core\items and create a file called "fn_bandage.sqf" paste the below in there

#include "..\..\script_macros.hpp"
/*

	File: fn_bandage.sqf
	Author: ToxicRageTv
	Credits: Original creator of the progress bar

	This script was created for the Altis Life RPG community.

*/
if (!alive player) exitWith{ "Bandages can't help you now..." };
	   if (life_inv_bandage < 1) exitWith{ hint "You don't have any bandages!" };
	   if (life_action_inUse) exitWith{ hint "You're already doing something!" };
	   if !(isNull objectParent player) exitWith { hint "You must be on foot in order bandage!" };

	   life_interrupted = false;
	   _configSide = switch (side player) do {
	   case civilian: {"Civilian"};
	   case west: {"Cop"};
	   case independent: {"Medic"};
					   default {"Civilian"};
	   };

	   _bandageMode = getNumber(missionConfigFile >> "Toxic_Config_Bandage" >> _configSide >> "bandageSetHealth");
	   _maxHealth = getNumber(missionConfigFile >> "Toxic_Config_Bandage" >> _configSide >> "bandageMaxHealth");

	   if (damage player <= _maxHealth) exitWith{ hint "A bandage cannot heal you any higher" };

	   _bandageTime = getNumber(missionConfigFile >> "Toxic_Config_Bandage" >> _configSide >> "bandageTime");
	   _sleepTime = _bandageTime / 100;

	   life_action_inUse = true;

	   //Setup our progress bar.
	   disableSerialization;
	   "progressBar" cutRsc["life_progress", "PLAIN"];
	   _ui = uiNamespace getVariable "life_progress";
	   _progress = _ui displayCtrl 38201;
	   _pgText = _ui displayCtrl 38202;
	   _pgText ctrlSetText format["Applying bandage (0%1)...", "%"];
	   _progress progressSetPosition 0.01;
	   _cP = 0.01;

	   for "_i" from 0 to 1 step 0 do {
		   if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then{
			   [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall["life_fnc_animSync",RCLIENT];
			   player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
			   player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
		   };

		   uiSleep _sleepTime;
		   _cP = _cP + 0.01;
		   _progress progressSetPosition _cP;
		   _pgText ctrlSetText format["Applying bandage (%1%2)...", round(_cP * 100), "%"];
		   if (_cP >= 1) exitWith{};
		   if (!alive player) exitWith{};
		   if !(isNull objectParent player) exitWith {};
		   if (life_interrupted) exitWith{};
	   };

	   life_action_inUse = false;
	   "progressBar" cutText["", "PLAIN"];
	   player playActionNow "stop";
	   if (life_interrupted) exitWith{ life_interrupted = false; titleText["Canceled applying bandage.","PLAIN"]; life_action_inUse = false; };
	   if !(isNull objectParent player) exitWith { titleText["Canceled applying bandage, you cannot enter a vehicle.", "PLAIN"]; };

	   if (_bandageMode == 1) then{
		   //Set health
		   player setDamage _maxHealth;
	   }
	   else {
		   //Add to health
		   _curHealth = damage player;
		   _newHealth = _curHealth - getNumber(missionConfigFile >> "Toxic_Config_Bandage" >> _configSide >> "bandageHealing");
		   if (_newHealth < _maxHealth) then{
			   player setDamage _maxHealth;
		   }
		   else {
			   player setDamage _newHealth;
		   };
	   };

	   [false, "bandage", 1] call life_fnc_handleInv;

	   titleText["Bandage applied.", "PLAIN"];
	   // go to Altis_Life\config and make a file called "Toxic_Config_bandage.hpp"
#define true 1
#define false 0

	   class Toxic_Config_Bandage {
		   /*
			   bandageTime: (INTEGER) The time in SECONDS it takes to apply the bandage

			   bandageSetHealth: (BOOLEAN) When using the bandage it will set the players health
				   to the same everytime. Otherwise, it will add to the players current health.

			   bandageMaxHealth: (INTEGER) The max amount of health a player can receive from
				   using a bandage. If bandageSetHealth = true then this is how much health they will receive

			   bandageHealing: (INTEGER) The amount of health given to the player everytime they
				   use a bandage. 0 = 100%, 1 = dead
				   * NOTE: This will only be used if bandageSetHealth = false

		   */

		   class Civilian {
			   bandageTime = 5;
			   bandageSetHealth = false;
			   bandageMaxHealth = 0.2;
			   bandageHealing = 0.2;
		   }

		   class Cop {
			   bandageTime = 5;
			   bandageSetHealth = false;
			   bandageMaxHealth = 0.2;
			   bandageHealing = 0.2;
		   }

		   class Medic {
			   bandageTime = 5;
			   bandageSetHealth = false;
			   bandageMaxHealth = 0.2;
			   bandageHealing = 0.2;
		   }
	   }