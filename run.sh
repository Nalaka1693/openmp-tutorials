#!/usr/bin/env bash

g++ -fopenmp -o parallel_region 00-parallel_region.cpp

unamestr=`uname`

if [[ "$unamestr" == 'Linux' ]]; then
   ./parallel_region
    rm -rf parallel_region
elif [[ "$unamestr" == 'MINGW64_NT-10.0' ]]; then
    ./parallel_region.exe
    rm -rf parallel_region.exe
fi