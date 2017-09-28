/*
Copyright (c) 2014-2017 AscEmu Team <http://www.ascemu.org/>
This file is released under the MIT license. See README-MIT for more information.
*/

#include "Setup.h"
#include "Server/Script/ScriptSetup.h"

#define SKIP_ALLOCATOR_SHARING 1

extern "C" {
    SCRIPT_DECL void _exp_set_serverstate_singleton(ServerState* serverState)
    {
        ServerState::instance(serverState);
    }

    SCRIPT_DECL uint32_t _exp_get_script_type()
    {
        return SCRIPT_TYPE_MISC;
    }

    SCRIPT_DECL void _exp_script_register(ScriptMgr* scriptMgr)
    {
        //EasterKingdoms
        AlteracValleyScripts(scriptMgr);
        BlackrockDepthsScripts(scriptMgr);
        BlackrockSpireScripts(scriptMgr);
        BlackwingLairScripts(scriptMgr);
        MoltenCoreScripts(scriptMgr);
        DeadminesScripts(scriptMgr);
        GnomreganScripts(scriptMgr);
        KarazhanScripts(scriptMgr);
        MagisterTerraceScripts(scriptMgr);
        ScarletEnclaveScripts(scriptMgr);
        ScarletMonasteryScripts(scriptMgr);
        ScholomanceScripts(scriptMgr);
        ShadowfangKeepScripts(scriptMgr);
        StratholmeScripts(scriptMgr);
        SunkenTempleScripts(scriptMgr);
        SunwellPlateauScripts(scriptMgr);
        TheStockadeScripts(scriptMgr);
        UldamanScripts(scriptMgr);
        ZulAmanScripts(scriptMgr);
        ZulGurubScripts(scriptMgr);

        //Kalimdor
        BlackfathomDeepsScripts(scriptMgr);
        BattleForMountHyjalScripts(scriptMgr);
        CullingOfStratholmScripts(scriptMgr);
        TheBlackMorassScripts(scriptMgr);
        OldHillsbradFoothillsScripts(scriptMgr);
        DireMaulScripts(scriptMgr);
        MaraudonScripts(scriptMgr);
        OnyxiasLairScripts(scriptMgr);
        RagefireChasmScripts(scriptMgr);
        RazorfenDownsScripts(scriptMgr);
        RazorfenKraulScripts(scriptMgr);
        RuinsOfAhnQirajScripts(scriptMgr);
        TempleOfAhnQirajScripts(scriptMgr);
        WailingCavernsScripts(scriptMgr);
        ZulFarrakScripts(scriptMgr);

        IcecrownCitadel(scriptMgr);

        TheArcatrazScripts(scriptMgr);
        TheBotanicaScripts(scriptMgr);
        TheEyeScripts(scriptMgr);
        TheMechanarScripts(scriptMgr);

        AuchenaiCryptsScripts(scriptMgr);
        ManaTombsScripts(scriptMgr);
        SethekkHallsScripts(scriptMgr);
        ShadowLabyrinthScripts(scriptMgr);
    }
}

#ifdef WIN32

BOOL APIENTRY DllMain(HANDLE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    return TRUE;
}

#endif  //Win32
