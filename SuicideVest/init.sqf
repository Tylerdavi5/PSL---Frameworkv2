player addEventHandler ["InventoryClosed", {
        suicide = "Vest_V_Chestrig_oil";
        if (vest player isequalto suicide) then {
			player AddAction ["Explode", execVM "fn_suicideBomb.sqf"];
        };
}];
player addAction ["blow dis bitch up!", "explode.sqf"];