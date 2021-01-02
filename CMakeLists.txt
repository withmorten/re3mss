cmake_minimum_required(VERSION 3.8)
project(re3mss C)

if(NOT WIN32)
    message(FATAL_ERROR "re3mss is only available for Windows")
endif()

include(GNUInstallDirs)

add_library(re3mss SHARED
    re3mss/mss32.c
)
target_include_directories(re3mss
    PUBLIC "$<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/re3mss>"
    PUBLIC "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)
set_target_properties(re3mss PROPERTIES
    DEFINE_SYMBOL RE3MSS_EXPORTS
    RUNTIME_OUTPUT_NAME mss32
    ARCHIVE_OUTPUT_NAME mss32
    EXPORT_NAME "MilesSDK"
    PREFIX ""
)

install(TARGETS re3mss EXPORT re3mssExports
    ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
)
install(FILES "re3mss/mss.h"
    DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)
install(EXPORT re3mssExports
    NAMESPACE "MilesSDK::"
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/MilesSDK"
    FILE MilesSDK-config.cmake
)
