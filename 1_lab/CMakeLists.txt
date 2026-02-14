cmake_minimum_required(VERSION 3.10)
project(OpenCV_Test)

set(OpenCV_DIR "C:/msys64/mingw64/include/opencv/build")
find_package(OpenCV REQUIRED)

add_executable(main src/main.cpp)

target_link_libraries(main ${OpenCV_LIBS})