# Introduction

A boilerplate for ImGui and Intel Control Library Windows applications.

## Getting Started

> Make sure [CMake](https://cmake.org/download/) is installed and added to PATH.

*Clone this repository locally:*

``` bash
git clone https://github.com/rk020/imgui-igcl.git
```

*Download the required submodules*

``` bash
update.bat
```

*Update your app name in `src/CMakeLists.txt` file:*

``` CMake
cmake_minimum_required(VERSION 3.6)
enable_language(C CXX)

set(APP_NAME "ImGuiIgclApp")  # Replace ImGuiIgclApp with your app name
set(EXE_NAME "${APP_NAME}")

```

*Generate the solution by running `generate.bat`. Solution will be generated in a new temporary directory `_build`*
