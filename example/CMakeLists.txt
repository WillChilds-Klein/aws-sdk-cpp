# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0

# Set the minimum required version of CMake for this project.
cmake_minimum_required(VERSION 3.13)

set(SERVICE_NAME sts)
set(SERVICE_COMPONENTS sts)

# Set this project's name.
project("${SERVICE_NAME}-examples")

# Set the C++ standard to use to build this target.
set(CMAKE_CXX_STANDARD 11)

# Build shared libraries by default.
set(BUILD_SHARED_LIBS ON)

# Enable CTest for testing these code examples.
if(BUILD_TESTS)
    include(CTest)
endif()


# Find the AWS SDK for C++ package.
find_package(AWSSDK REQUIRED COMPONENTS ${SERVICE_COMPONENTS})

# AWSDOC_SOURCE can be defined in the command line to limit the files in a build. For example,
# you can limit files to one action.
if(NOT DEFINED AWSDOC_SOURCE)
    file(GLOB AWSDOC_SOURCE
        "*.cpp"
    )
endif()

foreach(file ${AWSDOC_SOURCE})
    get_filename_component(EXAMPLE ${file} NAME_WE)

    # Build the code example executables.
    set(EXAMPLE_EXE run_${EXAMPLE})

    add_executable(${EXAMPLE_EXE} ${file})

    target_link_libraries(${EXAMPLE_EXE} ${AWSSDK_LINK_LIBRARIES}
            ${AWSSDK_PLATFORM_DEPS})

endforeach()
