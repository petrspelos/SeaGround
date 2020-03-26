@echo off

call misc/shell.bat

mkdir build
pushd build

cl -Zi ../src/win32_seaground.cpp user32.lib

popd