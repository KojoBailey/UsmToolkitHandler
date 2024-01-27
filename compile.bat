@ECHO OFF

echo Compiling...
g++ src/main.cpp icon/icon.res -o Handler.exe -std=c++20 -static -static-libgcc -static-libstdc++