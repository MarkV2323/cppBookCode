# Varible containing all compiler flags
B_FLAGS="\
-std=c++17 \
-Wall \
-o main.exe \
-I ./
"

# Varible containing all build files
B_FILES="\
src/main.cpp \
src/programOne.cpp
"

# Remove any artifacts from previous
rm -f main.exe

# Begin compiling
g++ $B_FLAGS $B_FILES

# run binary
./main.exe

# cleanup
rm -f main.exe