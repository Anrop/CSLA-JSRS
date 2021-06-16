class CfgPatches {
    class anrop_csla_jsrs_weapons_1911 {
        name = "anrop_csla_jsrs_weapons_1911";
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
    class Pistol_Base_F;

    class US85_pistolBase: Pistol_Base_F
    {
        class Single;
    };
    
    class US85_1911 : US85_pistolBase 
    {
        class Single: Single
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_acpc_shot_soundset", "jsrs_cal45_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_acpc_shot_silenced_soundset", "jsrs_cal45_sd_reverb_soundset"};
            };
        };
    };
};
