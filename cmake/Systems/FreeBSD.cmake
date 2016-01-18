# Copyright (C) 2014-2015 AscEmu Team <http://www.ascemu.org>
message(STATUS "Applying settings for Linux system")

add_definitions(-DUSE_KQUEUE)

find_package(ZLIB REQUIRED)
find_package(PCRE REQUIRED)
find_package(OpenSSL REQUIRED)
find_package(Threads REQUIRED)
find_package(MySQL REQUIRED)
find_package(BZip2 REQUIRED)

if(CMAKE_COMPILER_IS_GNUCXX)
    include(${CMAKE_SOURCE_DIR}/cmake/Compilers/gcc.cmake)
else()
    message(FATAL_ERROR "Compiler is not supported")
endif()
