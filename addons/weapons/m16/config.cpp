class CfgPatches {
    class anrop_csla_jsrs_weapons_m16 {
        name = "anrop_csla_jsrs_weapons_m16";
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
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons 
{
    class US85_weaponBase;
    
    class US85_M16_base : US85_weaponBase 
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m16a4_shot_soundset", "jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m16a4_shot_silenced_soundset", "jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
        class Burst: Mode_Burst
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m16a4_shot_soundset", "jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m16a4_shot_silenced_soundset", "jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m16a4_shot_soundset", "jsrs_5x56mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_m16a4_shot_silenced_soundset", "jsrs_5x56mm_sd_reverb_soundset"};
            };
        };
    };
};
