class CfgVehicles
{
    class C_IDAP_supplyCrate_F;
    class GTO_arsenal_base : C_IDAP_supplyCrate_F
    {
        displayName = "BASE";
        author = "LucyferHW";

        arsenalType = "";

        editorCategory = "GTO";
        editorSubcategory = "GTO_Arsenal";

        scope = 1;
        scopeCurator = 1;

        disableInventory = 1;

        ace_cargo_canLoad = 0;
        DLC = "";

        class TransportItems {};
        class TransportMagazines {};
        class TransportWeapons {};
        class TransportBackpacks {};

        class ACE_Actions
        {
            class ACE_MainActions
            {

			    displayName = "Arsenal";
                statement = ""; //[_target, [] call GTO_fnc_returnArsenal_Basic, false] call ace_arsenal_fnc_addVirtualItems;

				runOnHover = 1;
                distance = 6;

				class openArsenal
				{
					displayName = "Open Arsenal";
                	statement = "[_target, _player, false] call ace_arsenal_fnc_openBox;";
                	condition =  "!isNil {_target getVariable 'ace_arsenal_virtualItems'}";
                	exceptions[] = {}; //"isNotSwimming", "isNotInside", "notOnMap", "isNotSitting"
                	priority = 1;
				};

				class takeRole
				{
					displayName = "Take Role";
                	condition =  "true"; //!isNil {_target getVariable 'ace_arsenal_virtualItems'};
                	exceptions[] = {};
					priority = 2;

                    class categorie_lead
                    {
                        displayName = "Lead";
                	    condition =  "true"; //todo: has a vanilla rank greater then coprol
                	    exceptions[] = {};

                        class role_PL
                        {
                            displayName = "PL (Coming soon)";
                            condition = "true"; 
                            //statement = "['pl', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

                        class role_SL
                        {
                            displayName = "SL";
                            condition = "true"; 
                            statement = "['sl', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

					    class role_FTL
                        {
                            displayName = "FTL";
                            condition = "true"; 
                            statement = "['ftl', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };
                    };

                    class categorie_support
                    {
                        displayName = "Support";
                	    condition =  "true"; //todo: has a vanilla rank greater then coprol
                	    exceptions[] = {};				

					    class role_Doctor
                        {
                            displayName = "Doctor";
                            condition = "true"; 
                            statement = "['doctor', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;    ";
                            exceptions[] = {}; 
                        };

					    class role_Medic
                        {
                            displayName = "Medic";
                            condition = "true"; 
                            statement = "['medic', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox; ";
                            exceptions[] = {}; 
                        };
                    };

                    class categorie_Weapon
                    {
                        displayName = "Weapon";
                	    condition =  "true"; //todo: has a vanilla rank greater then coprol
                	    exceptions[] = {};
					    priority = 1;

					    class role_Rifleman
                        {
                            displayName = "Heavy Weapon";
                            condition = "true"; 
                            statement = "['rifleman', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call   ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

					    class role_Ammo_Carrier
                        {
                            displayName = "Ammo Carrier";
                            condition = "true"; 
                            statement = "['ammoCarrier', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call    ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

					    class role_MG
                        {
                            displayName = "MG";
                            condition = "true"; 
                            statement = "['mg', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

					    class role_Grenadier
                        {
                            displayName = "Grenadier";
                            condition = "true"; 
                            statement = "['grenadier', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call  ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

					    class role_AT
                        {
                            displayName = "AT";
                            condition = "true"; 
                            statement = "['at', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

                        class role_Marksman
                        {
                            displayName = "Marksman";
                            condition = "true"; 
                            statement = "['marksman', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call   ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };
                    };

                    class categorie_special
                    {
                        displayName = "Special";
                	    condition =  "true"; //todo: coprol
                	    exceptions[] = {};

					    class role_Sniper
                        {
                            displayName = "Sniper";
                            condition = "true"; 
                            statement = "['sniper', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;    ";
                            exceptions[] = {}; 
                        };

					    class role_Spotter
                        {
                            displayName = "Spotter";
                            condition = "true"; 
                            statement = "['spotter', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call    ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };                        

					    class role_Sapper
                        {
                            displayName = "Sapper";
                            condition = "true"; 
                            statement = "['sapper', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;    ";
                            exceptions[] = {}; 
                        };

					    class role_Pionier
                        {
                            displayName = "Pionier";
                            condition = "true"; 
                            statement = "['pionier', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call    ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

					    class role_Enginier
                        {
                            displayName = "Enginier";
                            condition = "true"; 
                            statement = "['enginier', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call   ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

					    class role_JTAC
                        {
                            displayName = "JTAC";
                            condition = "true"; 
                            statement = "['jtac', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

                        class role_UAV
                        {
                            displayName = "UAV (Coming soon)";
                            condition = "true"; 
                            //statement = "['uav', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };
                    };

                    class categorie_Vehicle
                    {
                        displayName = "Vehicle";
                	    condition =  "true"; //todo: has a vanilla rank greater then coprol
                	    exceptions[] = {};

					    class role_Pilot
                        {
                            displayName = "Pilot";
                            condition = "true"; 
                            statement = "['pilot', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox; ";
                            exceptions[] = {}; 
                        };

					    class role_Crewman
                        {
                            displayName = "Crewman";
                            condition = "true"; 
                            statement = "['crewman', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call    ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };                        
                    };

                    class categorie_other
                    {
                        displayName = "Other";
                	    condition =  "true"; //todo: has permissions
                	    exceptions[] = {};

                        class role_Zeus
                        {
                            displayName = "Zeus";
                            condition = "true"; 
                            statement = "['zeus', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox;";
                            exceptions[] = {}; 
                        };

					    class role_Admin
                        {
                            displayName = "Admin";
                            condition = "true"; 
                            statement = "['admin', getText (configOf _target >> 'arsenalType'), _target] call GTO_fnc_setRole; [_target, _player] call ace_arsenal_fnc_openBox; ";
                            exceptions[] = {}; 
                        };
                    };
				};	
            };
        };
    };

    class GTO_arsenal_usa : GTO_arsenal_base
    {
        displayName = "Arsenal USA";
        arsenalType = "USA";
        scope = 2;
        scopeCurator = 2;
        //hiddenSelectionsTextures[] = {gtom\arsenal\pics\Arsenal_USA.paa};
    };

    class GTO_arsenal_vanilla : GTO_arsenal_base
    {
        displayName = "Arsenal Vanilla";
        arsenalType = "Vanilla";
        scope = 1; //todo: change when working
        scopeCurator = 1;
        //hiddenSelectionsTextures[] = {gtom\arsenal\pics\Arsenal_USA.paa};
    };
};