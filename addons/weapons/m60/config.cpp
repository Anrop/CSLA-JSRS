class CfgPatches {
    class anrop_csla_jsrs_weapons_m60 {
        name = "anrop_csla_jsrs_weapons_m60";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"CSLA_WEAPONS", "jsrs_soundmod_complete_edition"};
        addonRootClass = "CSLA_WEAPONS";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class CfgWeapons 
{
    class US85_MachinegunBase_5_56;

    class US85_MachinegunBase_7_62: US85_MachinegunBase_5_56 {
        class manual;
    };
    
    class US85_M60 : US85_MachinegunBase_7_62 
    {
        class manual: manual
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m60e4_shot_soundset", "jsrs_7x62mm_reverb_soundset", "jsrs_gunner_casing"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m60e4_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };

    class MGun;

    class US85_M240_veh: MGun {
        class manual;
    };

    class US85_M60_veh : US85_M240_veh 
    {
        class manual: manual
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m60e4_shot_soundset", "jsrs_7x62mm_reverb_soundset", "jsrs_gunner_casing"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m60e4_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };
};
