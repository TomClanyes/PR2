cmake_minimum_required(VERSION 3.10)
project(pr2_cu)

set(CMAKE_C_STANDARD 11)

include_directories(header)

add_executable(pr2_cu 
    src/main.c 
    src/users.c 
    src/processes.c 
    src/log.c 
    src/errors.c
)
