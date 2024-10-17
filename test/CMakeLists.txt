cmake_minimum_required(VERSION 3.10)
project(VK_algo_course_tests)

set(GTEST_DIR "C:/msys64/mingw32")
set(GTEST_INCLUDE_DIR "${GTEST_DIR}/include")
set(GTEST_LIBRARY_DIR "${GTEST_DIR}/lib")

include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${GTEST_INCLUDE_DIR})
link_directories(${GTEST_LIBRARY_DIR})

message(STATUS "GTest include dirs: ${GTEST_INCLUDE_DIR}")
message(STATUS "GTest libraries: ${GTEST_LIBRARY_DIR}")

find_library(GTEST_LIB gtest HINTS ${GTEST_LIBRARY_DIR})
find_library(GTEST_MAIN_LIB gtest_main HINTS ${GTEST_LIBRARY_DIR})

if(NOT GTEST_LIB OR NOT GTEST_MAIN_LIB)
    message(FATAL_ERROR "Google Test libraries not found!")
endif()

file(GLOB TEST_FILES "${CMAKE_CURRENT_SOURCE_DIR}/tests_week_*.cpp")
if(NOT TEST_FILES)
    message(FATAL_ERROR "No test files found in ${CMAKE_CURRENT_SOURCE_DIR}!!!")
else()
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/test/bin")
    foreach(test_file ${TEST_FILES})
        message(STATUS "Test file ${test_file} was successfully found.")

        get_filename_component(test_name ${test_file} NAME_WE) 
        string(REGEX MATCH "[0-9]+" week_number "${test_name}")  
        #message(STATUS "Extracted week number: ${week_number}")  

        set(SOURCE_FILES "${CMAKE_SOURCE_DIR}/src/week_${week_number}/week_${week_number}.cpp") 
    
        add_executable(${test_name} ${test_file} ${SOURCE_FILES})  
        set_target_properties(${test_name} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/test/bin"
        )
    
        target_link_libraries(${test_name} ${GTEST_LIB} ${GTEST_MAIN_LIB})
        add_test(NAME ${test_name} COMMAND ${test_name})
    endforeach()
endif()


