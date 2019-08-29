# RigidBodySimulator
A 2D Rigid Body Simulator written in C++ using OpenGL and VS 2017.

## Building

First, clone this project via github using:

```
git clone --recursive https://github.com/DerekCresswell/RigidBodySimulator
```

As the build system, this project uses premake. In order to build:

``` sh
# On windows
C:\project_root> vendor\windows\premake5.exe vs2017

# On linux
$ vendor/linux/premake5 gmake
```

This will create the appropriate build files for your development environment.

> Compiled files (libraries and binaries) will go to __bin/__ and temporary files
like .obj files will go into __bin-int/__
