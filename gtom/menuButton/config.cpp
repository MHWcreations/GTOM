#include "\gtom\basicDefines_A3.hpp"

class CfgPatches
{
    class GTOM_MenuButton
    {
        name = "GTOM MenuButton";
        author = "LucyferHW";
        url = "";

        units[] = {"JoinServerGTO"};

        requiredAddons[] = {"GTOM_Main"};
    };
};

class CfgMainMenuSpotlight
{
    class JoinServerGTO
    {
        text = "GTO Server";
        picture = "gtom\logo\gto_unit_logo.paa";
        //action = QUOTE([_this, 'server.tacticalbacon.de', '2302', 'tbm'] call COMPILE_SCRIPT(joinServer)); // execVM QPATHTOF
        action = "connectToServer ['5.83.170.148', 21000, 'asdf0987']";
        actionText = "Join GTO Server";
        condition = "GTO_MenuButtonVisible";
    };

    class JoinServerFschJgRgt
    {
        text = "FschJgRgt Server";
        picture = "gtom\logo\Fallschirmjagerregiment_42.paa";
        //action = QUOTE([_this, 'server.tacticalbacon.de', '2302', 'tbm'] call COMPILE_SCRIPT(joinServer)); // execVM QPATHTOF
        action = "connectToServer ['185.240.242.109', 2302, 'FschJgRgt42']";
        actionText = "Join FschJgRgt Server";
        condition = "false";
    };

    
    // class ApexProtocol { condition = "!(GTO_MenuButtonVisible)";};
    // class BootCamp { condition = "!(GTO_MenuButtonVisible)";};
    // class EastWind { condition = "!(GTO_MenuButtonVisible)";};
    // class Orange_CampaignGerman { condition = "!(GTO_MenuButtonVisible)";};
    // class Orange_Showcase_IDAP { condition = "!(GTO_MenuButtonVisible)";};
    // class Orange_Showcase_LoW { condition = "!(GTO_MenuButtonVisible)";};
    // class Showcase_TankDestroyers { condition = "!(GTO_MenuButtonVisible)";};
    // class Tacops_Campaign_01 { condition = "!(GTO_MenuButtonVisible)";}; // Can´t be deleted
    // class Tacops_Campaign_02 { condition = "!(GTO_MenuButtonVisible)";};
    // class Tacops_Campaign_03 { condition = "!(GTO_MenuButtonVisible)";};
    // class Tanks_Campaign_01 { condition = "!(GTO_MenuButtonVisible)";};
    // class gm_campaign_01 { condition = "!(GTO_MenuButtonVisible)";};
    // class Contact_Campaign { condition = "!(GTO_MenuButtonVisible)";};
    // class OldMan { condition = "!(GTO_MenuButtonVisible)";};
    // class SP_FD14 { condition = "!(GTO_MenuButtonVisible)";};
    // class Orange_Campaign { condition = "!(GTO_MenuButtonVisible)";};
    // class AoW_Showcase_AOW { condition = "!(GTO_MenuButtonVisible)";};
    // class AoW_Showcase_Future { condition = "!(GTO_MenuButtonVisible)";};
};

/*
Server name: [GTO] German Tactical Ops
Address: 5.83.170.148:21000
Server version: 210149954
Required game version: 2.10.0


/*Server name: Fallschirmjägerregiment 42 Offizieller Gameserver
Address: 185.240.242.109:2302
Server version: 210149799
Required game version: 2.10.0
*/