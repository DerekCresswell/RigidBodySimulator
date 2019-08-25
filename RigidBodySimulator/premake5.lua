project "rigid-body-simulator"
    kind "ConsoleApp"
    language "C++"

    includedirs {
        (BASE_DIR .. "/gl3w/include"),
        (BASE_DIR .. "/glfw/include")
    }

    files { "src/**.h", "src/**.cpp"}

    filter "system:windows"
        links { "glfw", "opengl32", "gdi32" }

    filter "system:linux"
        links { "glfw", "X11", "GL", "gl3w", "dl", "pthread" }