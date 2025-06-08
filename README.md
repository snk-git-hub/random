A C programming exercise generate normally distributed random numbers using the Box-Muller transform.
Built with modular files (main.c, random.c, random.h) and compiled using CMake.


snk@fedora:~/random$ cd build/
snk@fedora:~/random/build$ cmake ..
-- Configuring done (0.1s)
-- Generating done (0.0s)
-- Build files have been written to: /home/snk/random/build
snk@fedora:~/random/build$ make 
[100%] Built target main
snk@fedora:~/random/build$ ls
CMakeCache.txt  CMakeFiles  cmake_install.cmake  main  Makefile
snk@fedora:~/random/build$ ./main

Random Normal: -1.301821
Random Normal: 0.685157
Random Normal: 0.397405
Random Normal: 0.348938
Random Normal: -0.280673

snk@fedora:~/random/build$ 

