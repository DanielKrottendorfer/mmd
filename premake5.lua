require ("./tools/premake5/premake-ps4")
require("premake-commands")

workspace "MMD"
    location ("./workspaces/" .. _ACTION)
    configurations { "Debug", "Release" }
    platforms { "x64", "Orbis" }

project "Game"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
    flags { "FatalWarnings" }
    targetdir "build/%{cfg.platform}/bin/%{cfg.buildcfg}"

    files { 
        "src/**.h",
        "src/**.cpp"
    }

    filter "platforms:x64"
        defines { "PLATFORM_WINDOWS" }
        links {
            "Xinput.lib",
            "Xinput9_1_0.lib"
        }

    filter "platforms:Orbis"
        defines { "PLATFORM_ORBIS" }
        links {
            "ScePad_stub_weak",
            "SceUserService_stub_weak"
        }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NO_DEBUG", "RELEASE" }
        optimize "On"
