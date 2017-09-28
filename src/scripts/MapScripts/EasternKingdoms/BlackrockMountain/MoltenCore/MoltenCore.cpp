/*
Copyright (c) 2014-2017 AscEmu Team <http://www.ascemu.org/>
This file is released under the MIT license. See README-MIT for more information.
*/

#include "Setup.h"
#include "MoltenCore.h"


class MoltenCore : public InstanceScript
{
public:

    MoltenCore(MapMgr* pMapMgr) : InstanceScript(pMapMgr)
    {
        generateBossDataState();
    }

    static InstanceScript* Create(MapMgr* pMapMgr) { return new MoltenCore(pMapMgr); }

    void OnCreatureDeath(Creature* pCreature, Unit* pUnit)
    {
        setData(pCreature->GetEntry(), Finished);
    }
};


void MoltenCoreScripts(ScriptMgr* scriptMgr)
{
    scriptMgr->register_instance_script(409, &MoltenCore::Create);
}

