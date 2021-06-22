class CfgPatches {
    class anrop_csla_jsrs_weapons_mpv {
        name = "anrop_csla_jsrs_weapons_mpv";
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
    
    class US85_MPV_BASE : US85_weaponBase
    {
        class Single: Mode_SemiAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_soundset", "jsrs_9mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
        class Burst: Mode_Burst
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_soundset", "jsrs_9mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_soundset", "jsrs_9mm_reverb_soundset"};
            };
            class SilencedSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
    };

    class US85_MPVSD : US85_MPV_BASE
    {
        class Single: Mode_SemiAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
        class Burst: Mode_Burst
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            class StandardSound
            {
                soundSetShot[] = {"jsrs_protc_shot_silenced_soundset", "jsrs_9mm_sd_reverb_soundset"};
            };
        };
    };
};
