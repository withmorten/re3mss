from conans import ConanFile, CMake, tools
from conans.errors import ConanInvalidConfiguration
import textwrap


class MilesSDKConan(ConanFile):
    name = "miles-sdk"
    settings = "os", "arch", "compiler", "build_type"

    exports_sources = "CMakeLists.txt", "re3mss/mss.h", "re3mss/mss32.c"
    generators = "cmake"
    no_copy_source = True

    def configure(self):
        if self.settings.os != "Windows":
            raise ConanInvalidConfiguration("miles-sdk is not available for os != Windows")

    def build(self):
        tools.save("CMakeLists.txt",
                   textwrap.dedent(
                       """
                       cmake_minimum_required(VERSION 3.0)
                       project(cmake_wrapper)

                       include("{}/conanbuildinfo.cmake")
                       conan_basic_setup(TARGETS)

                       add_subdirectory("{}" re3mss)
                       """).format(self.install_folder.replace("\\", "/"),
                                   self.source_folder.replace("\\", "/")))
        cmake = CMake(self)
        cmake.configure(source_folder=self.build_folder)
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()

    def package_info(self):
        if self.settings.arch in ("x86_64", "armv8", "armv8.3"):
            libsuffix = "64"
        else:
            libsuffix = "32"
        self.cpp_info.libs = ["mss{}".format(libsuffix)]
        self.cpp_info.names["cmake_find_package"] = "MilesSDK"
        self.cpp_info.names["cmake_find_package_multi"] = "MilesSDK"
