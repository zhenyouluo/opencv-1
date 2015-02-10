# Opencv
A repository of tutorials and demos

### Projects.
+ 0001 Display Image.
+ 0002 Load, modify and save image.
+ 0003 webcam.

### Sample CMake file.
cmake_minimum_required(VERSION 2.8)
project( webcam )
find_package( OpenCV REQUIRED )
add_executable( webcam webcam.cpp )
target_link_libraries( webcam ${OpenCV_LIBS} ) 

### Generate executable
cd <DisplayImage_directory>
cmake .
make

### Run Exe
./DisplayImage lena.jpg