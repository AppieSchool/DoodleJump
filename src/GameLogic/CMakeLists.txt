add_library(Logic STATIC
        World.cpp
        Entity.cpp
        Random.cpp
        Stopwatch.cpp
)

# Ensure the output path is consistent
set_target_properties(Logic PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/src/GameLogic"
)
