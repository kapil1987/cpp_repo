# Minimum cmake version required
cmake_minimum_required(VERSION 3.5.1)

# Set project name. This command also sets the 
# variable PROJECT_SOURCE_DIR which will be used
# below
project(Geometry)

# CMAKE variable - SRC. Points to all the source files
# used to compile this library
# set function is used to set a cmake variable
set(SRC ${PROJECT_SOURCE_DIR}/Source/Point2D.cpp ${PROJECT_SOURCE_DIR}/Source/Circle.cpp)

# Add a shared library target - Geometry
add_library(Geometry SHARED ${SRC})

# Specify include directory for the target - Geometry
target_include_directories(Geometry PUBLIC ${PROJECT_SOURCE_DIR}/Include/)



