cmake_minimum_required(VERSION 3.17)
project(Hohoemi)

set(CMAKE_CXX_STANDARD 20)

set(USER_SRC
        ${PROJECT_SOURCE_DIR}/data/stock.cpp
        ${PROJECT_SOURCE_DIR}/main.cpp)

set(HEADERS
        ${PROJECT_SOURCE_DIR}/data/stock.h)

add_executable(Hohoemi ${USER_SRC})

target_include_directories(Hohoemi
        PRIVATE
        ${HEADERS})

install(TARGETS Hohoemi
        DESTINATION bin)