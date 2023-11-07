cmake_minimum_required(VERSION 3.22)

project (tareas_Noe LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 20)
set (CMAKE CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)

function(target PROYECT_NAME)

    file(GLOB_RECURSE SRC CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOUCE_DIR}/${PROYECT_NAME}/src/*.cpp")
    add_executable(${PROYECT_NAME} ${SRC})
    target_include_directories(${PROYECT_NAME} PRIVATE "${CMAKE_CURRECT_SOURCE_DIR}/${PROYECT_NAME}/include")
    

endfunction(target PROYECT_NAME)

target()