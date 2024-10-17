cmake_minimum_required(VERSION 3.10)
project(VK_algo_course)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(BIN_DIR "${CMAKE_BINARY_DIR}/bin")

file(MAKE_DIRECTORY ${BIN_DIR})

include_directories(${INCLUDE_DIR})

function(compile_week week_dir)
    
    file(GLOB week_sources "${week_dir}/*.cpp")
    get_filename_component(week_name ${week_dir} NAME)

    set(week_bin_dir "${BIN_DIR}/${week_name}")
    file(MAKE_DIRECTORY ${week_bin_dir})

    set(week_file "")

    foreach(source_file ${week_sources})
        get_filename_component(source_name ${source_file} NAME)

        if(source_name MATCHES "week_[0-9]+.cpp")
            message(STATUS "Week-implementation file ${source_name} was found successfully.")
                set(week_file ${source_file})
            break()
        endif()
    endforeach()

    if(NOT week_file)
        message(FATAL_ERROR "ERROR: No week_*.cpp file was found in ${week_dir}!!!")
    endif()

    foreach(source_file ${week_sources})
        get_filename_component(source_file_name ${source_file} NAME_WE)
        get_filename_component(week_file_name ${week_file} NAME_WE)
 
        if(NOT source_file_name STREQUAL week_file_name)

            message(STATUS "Compiling task ${week_file_name}/${source_file_name} with ${week_file}")

            add_executable(${source_file_name} ${source_file} ${week_file})

            set_target_properties(${source_file_name} PROPERTIES
                RUNTIME_OUTPUT_DIRECTORY ${week_bin_dir}
            )
                    
        endif()
            
    endforeach()
endfunction()

file(GLOB week_dirs "${SRC_DIR}/week_*")

foreach(week_dir ${week_dirs})
    compile_week(${week_dir})
endforeach()

option(ENABLE_TESTS "Enable building tests" ON)
if(ENABLE_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()
