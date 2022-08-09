## How to see the assembly in gdb ? 
layout asm
## How to see the code in gdb ? 
layout src
## Get next layout ? 
layout next
## How to compile into an o file? 
- gcc -c -o main.o main.c //-c when linking cannot be done when everything is not present right now.

## How to Build using Cmake?
Two ways:
First Way: By using the build system
1. mkdir build
2. cd build
3. cmake .. -DBUILD_SHARED_LIBS=ON
4. make -j8
5. make install
Second way is by telling cmake to create the build system, build and install using whatever command of the build system
1. cmake -B build -DBUILD_SHARED_LIBS=ON -DCMAKE_INSTALL_PREFIX=some/prefix
2. cmake --build build
3. cmake --install build 

## How to combine multiple object files into one executable?
Just give gcc the name of the executable and the files. (o,cc,a does not matter)
## How to combine multiple o files to an a file ? 
using "ar" command. ar --help
## How to see the files inside an a file ?
ar -t main.a
## How to extract a file from an a file ?
ar -x main.a
## List symbol table 
nm 
## List the symbol table after decoding cpp encoding
nm -gC main.o
-- These symbols will be used in the assembly code generated below
## Tell gcc to compile into assembly
gcc -S


