workspace "rigid-body-simulator"
    startproject "rigid-body-simulator"
    architecture "x64"
    configurations { "debug", "release" }

    BASE_DIR = path.getabsolute(".")
    targetdir (BASE_DIR .. '/bin')
    objdir (BASE_DIR .. '/bin-int')

    filter "configurations:debug"
        defines { "RBS_DEBUG" }
        symbols "on"

    filter "configurations:release"
        optimize "on"

include "gl3w"
include "glfw"
include "RigidBodySimulator"