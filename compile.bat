@echo off

pushd exe
clang -std=c++17 ../src/main.cc ../include/*.cc ../include/Instructions/*.cc -o main.exe
popd