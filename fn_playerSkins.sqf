// place the script below in the class of bags you want to be invis


        if (backpack player isEqualTo "B_Carryall_cbr") then {
            [unitBackpack player] remoteExecCall ["life_fnc_hideObj",-2];
        };
                    // or this





            case west: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            _skinName = "textures\cop_uniform.jpg";
            if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 1) then {
                if (FETCH_CONST(life_coplevel) >= 1) then {
                    _skinName = ["textures\cop_uniform_",(FETCH_CONST(life_coplevel)),".jpg"] joinString "";
                };
            };
            player setObjectTextureGlobal [0, _skinName];
        };
        if (backpack player isEqualTo "B_Carryall_cbr") then {
            [unitBackpack player] remoteExecCall ["life_fnc_hideObj",-2];
        };
    };

    // or this one too

    if ((backpack player) isEqualTo "B_Carryall_cbr") then {
   (unitBackpack player) setObjectTextureGlobal [0,""];
};