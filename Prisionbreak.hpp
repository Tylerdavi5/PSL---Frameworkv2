// https://www.altisliferpg.com/topic/11726-tutorial-prison-break-script-tested-on-50/



this addAction["Search Explosive", { hint("I Have Found an Improvised Bomb"); player setVariable["HaveCharge",true,true]; for "_anim" from 0 to 1 do {
   player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
   waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon"; };
  }; player addAction["Place Charge","fn_FTD_PlaceCharge.sqf"]; }];

  //edit line 6 with the class of your wall name
_wall = "Land_Wall_IndCnc_4_F"; //change this string with CFG name of your prison wall ("You can see the CFG name of the wall in the editor 3D, right click on wall and FIND ON RECOURCE BROWSER")
// done