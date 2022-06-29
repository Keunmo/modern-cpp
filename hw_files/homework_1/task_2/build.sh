#!/usr/bin/env bash
echo "Start build ipb_arithmetic..."

echo "Compile object sum.."
c++ -c -I./include src/sum.cpp -o build/sum.o
echo "Compile object subtract.."
c++ -c -I./include src/subtract.cpp -o build/subtract.o
echo "Archive objects and create library ipb_arithmetic.."
ar rcs result/lib/libipb_arithmetic.a build/sum.o build/subtract.o
echo "Link libraries and build main program.."
c++ -std=c++17 -I./include src/main.cpp -L build -lipb_arithmetic -o results/main
echo "Build complete!"