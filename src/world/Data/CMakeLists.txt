# Copyright (c) 2014-2020 AscEmu Team <http://www.ascemu.org>

set(PATH_PREFIX Data)

set(SRC_DATA_FILES
   ${PATH_PREFIX}/Flags.h
   ${PATH_PREFIX}/GuidData.h
   ${PATH_PREFIX}/WoWContainer.h
   ${PATH_PREFIX}/WoWCorpse.h
   ${PATH_PREFIX}/WoWDynamicObject.h
   ${PATH_PREFIX}/WoWGameObject.h
   ${PATH_PREFIX}/WoWItem.h
   ${PATH_PREFIX}/WoWObject.h
   ${PATH_PREFIX}/WoWPlayer.h
   ${PATH_PREFIX}/WoWUnit.h
)

if("${ASCEMU_VERSION}" STREQUAL "Cata")
   set(SRC_DATA_FILES
   ${SRC_DATA_FILES}
   ${PATH_PREFIX}/WoWAreaTrigger.h)
endif()
if("${ASCEMU_VERSION}" STREQUAL "Mop")
   set(SRC_DATA_FILES
   ${SRC_DATA_FILES}
   ${PATH_PREFIX}/WoWAreaTrigger.h)
endif()

source_group(Data FILES ${SRC_DATA_FILES})
unset(PATH_PREFIX)
