cmake_minimum_required(VERSION 3.20)
project(Data_Processing_and_Storage)

set(CMAKE_CXX_STANDARD 14)

# Add the executable target
add_executable(Data_Processing_and_Storage main.cpp InMemoryDB.cpp)

# If you have additional source files, you can add them like this:
# add_executable(Data_Processing_and_Storage main.cpp InMemoryDB.cpp AnotherFile.cpp)

# If InMemoryDB.h is in a different directory, you might need to specify the include directories
# include_directories(path/to/InMemoryDB.h)
