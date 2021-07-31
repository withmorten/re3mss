cmake_minimum_required(VERSION 3.8)

set(re3mss_MAINPROJECT ON)
if(DEFINED PROJECT_SOURCE_DIR)
    set(re3mss_MAINPROJECT OFF)
endif()

project(re3mss C)

option(re3mss_INSTALL "Install re3mss" ${re3mss_MAINPROJECT})

if(NOT WIN32)
    message(FATAL_ERROR "re3mss is only available for Windows")
endif()

include(GNUInstallDirs)

add_library(re3mss SHARED
    re3mss/mss32.c
)
add_library(MilesSDK::MilesSDK ALIAS re3mss)
target_include_directories(re3mss
    PUBLIC "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>"
    PUBLIC "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(ARCHSUFFIX 64)
else()
    set(ARCHSUFFIX 32)
endif()

set_target_properties(re3mss PROPERTIES
    DEFINE_SYMBOL RE3MSS_EXPORTS
    RUNTIME_OUTPUT_NAME mss${ARCHSUFFIX}
    ARCHIVE_OUTPUT_NAME mss${ARCHSUFFIX}
    EXPORT_NAME "MilesSDK"
    PREFIX ""
)

if(re3mss_INSTALL)
    install(TARGETS re3mss EXPORT re3mssExports
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    )
    install(FILES "include/mss.h"
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
    )
    install(EXPORT re3mssExports
        NAMESPACE "MilesSDK::"
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/MilesSDK"
        FILE MilesSDK-config.cmake
    )
endif()
