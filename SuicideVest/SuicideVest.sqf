// 'simple' suicide vest script
//This script will create an explosion of a
//selected size on any object when called
//The arguments are [objectName, explosionPower]
//Explosion Power will be 1 of 4 choices
//0 Small
//1 Medium
//2 Large
//3 Huge

//Example script call --> [theCar, "Small"] exec "IED.sqs"

//start script

_theObject = _this select 0
_theExplosion = _this select 1 _ammoType = "bp_GBU12_LGB_MI10"

//Deterimine the ordinance used to create the explosion

//(_theExplosion == "Small") : _ammoType = "GrenadeHand"
//(_theExplosion == "Medium") : _ammoType = "R_80mm_HE"
//(_theExplosion == "Large") : _ammoType = "Sh_122_HE"
//(_theExplosion == "Huge") : _ammoType = "Bo_GBU12_LGB_MI10"

//Get the location of the object being destroyed

_bombLoc = GetPos _theObject
_bombLocX = _bombLoc select 0
_bombLocY = _bombLoc select 1
_bombLocZ = _bombLoc select 2
_ammoType createVehicle[_bombLocX, _bombLocY, _bombLocZ]
_theObject setdammage 1