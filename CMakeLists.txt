cmake_minimum_required(VERSION 3.26)
project(DoodleJump)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

# SFML Dependency
include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 2.6.1
        GIT_SHALLOW ON
        EXCLUDE_FROM_ALL
        SYSTEM)
FetchContent_MakeAvailable(SFML)

# Add GameLogic Subdirectory
add_subdirectory(src/GameLogic)

# Main Executable
add_executable(main
        src/main.cpp
        src/Representation/Game.cpp
        src/Representation/RepConsts.h
)

# Include Directories for GameLogic
target_include_directories(main PUBLIC src/GameLogic)

# Link Libraries
target_link_libraries(main PRIVATE sfml-graphics Logic)

target_compile_features(main PRIVATE cxx_std_17)
target_compile_features(Logic PRIVATE cxx_std_17)

# Ensure Build Order
add_dependencies(main Logic)

# Windows-specific OpenAL DLL Copy
if(WIN32)
    add_custom_command(
            TARGET main
            COMMENT "Copy OpenAL DLL"
            PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy
            ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll
            $<TARGET_FILE_DIR:main>
            VERBATIM)
endif()
