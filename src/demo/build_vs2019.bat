cd "%~dp0"
if exist build (
   rmdir /s/q build
)

mkdir build
cd build
cmake -G "Visual Studio 16 2019" -DCMAKE_BUILD_TYPE=Release -S "../"
cmake --build . --target ALL_BUILD --config Release

.\Release\test.exe -d -fc
