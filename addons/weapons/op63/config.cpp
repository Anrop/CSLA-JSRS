class CfgPatches {
    class anrop_csla_jsrs_weapons_op63 {
        name = "anrop_csla_jsrs_weapons_op63";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"CSLA_WEAPONS", "jsrs_soundmod_complete_edition"};
        addonRootClass = "CSLA_WEAPONS";
        author = "Anrop";
        url = "https://www.anrop.se";
    };
};

class Mode_SemiAuto;

class CfgWeapons 
{
    class CSLA_baseWeapon;
    
    class CSLA_OP63_Base : CSLA_baseWeapon 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_svd_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
        };
    };
};
