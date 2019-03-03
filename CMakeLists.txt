cmake_minimum_required(VERSION 3.12.1)
project(gnl C)

set(CMAKE_C_STANDARD 99)

file(GLOB SOURCES
        libft/*.h
        libft/*.c
        *.h
        *.c)

add_executable(gnl
        ${SOURCES})

#set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -Werror")
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
#target_link_libraries(fdf -lmlx "-framework OpenGL" "-framework AppKit")