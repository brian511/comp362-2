project(sub C)

set(CMAKE_C_STANDARD 11)

SET(CMAKE_C_FLAGS "-m64 -g -O0 -D_DEBUG -Wall")

set(SOURCE_FILES sub.c)

add_executable(sub ${SOURCE_FILES})

set(CMAKE_BUILD_TYPE Debug)
