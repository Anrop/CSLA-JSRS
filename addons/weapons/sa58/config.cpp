class CfgPatches {
    class anrop_csla_jsrs_weapons_sa58 {
        name = "anrop_csla_jsrs_weapons_sa58";
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
    class Rifle_Base_F;

    class CSLA_baseWeapon: Rifle_Base_F
    {
        class Single;
        class FullAuto;
    };
    
    class CSLA_Sa58_Base : CSLA_baseWeapon 
    {
        class Single: Single
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_akm_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_akm_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_akm_shot_soundset", "jsrs_7x62mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_akm_shot_silenced_soundset", "jsrs_7x62mm_sd_reverb_soundset"};
            };
        };
    };
};
