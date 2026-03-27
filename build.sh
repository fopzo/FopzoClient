#!/bin/bash
mkdir -p build 
cd build
cmake -G "Ninja" -DCMAKE_MAKE_PROGRAM="ninja" ..
cmake --build . --parallel 1
echo "done ./build/fopzo"
