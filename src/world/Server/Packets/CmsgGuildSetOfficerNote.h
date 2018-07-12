/*
Copyright (c) 2014-2018 AscEmu Team <http://www.ascemu.org>
This file is released under the MIT license. See README-MIT for more information.
*/

#pragma once
#include <cstdint>

#include "ManagedPacket.h"
#include "WorldPacket.h"

namespace AscEmu { namespace Packets
{
    class CmsgGuildSetOfficerNote : public ManagedPacket
    {
    public:
        std::string targetName;
        std::string note;

        CmsgGuildSetOfficerNote() : CmsgGuildSetOfficerNote("", "")
        {
        }

        CmsgGuildSetOfficerNote(std::string targetName, std::string note) :
            ManagedPacket(CMSG_GUILD_SET_OFFICER_NOTE, 1),
            targetName(targetName),
            note(note)
        {
        }

    protected:
        bool internalSerialise(WorldPacket& packet) override
        {
            return false;
        }

        bool internalDeserialise(WorldPacket& packet) override
        {
            packet >> targetName >> note;
            return true;
        }
    };
}}