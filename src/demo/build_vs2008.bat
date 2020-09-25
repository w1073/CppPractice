cd "%~dp0"
if exist build (
   rmdir /s/q build
)

mkdir build
cd build
cmake -G "Visual Studio 9 2008" -DCMAKE_BUILD_TYPE=Release -S "../"
cmake --build . --target ALL_BUILD --config Release

.\Release\test.exe -d -fc
