#!/bin/bash
gcc -Wall -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LTBRARY_PATH=.:$LD_LIBRARY_PATH
