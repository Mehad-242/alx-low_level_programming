#!/bin/bash
gcc -Wall -Werror -pedantic -c -fPTC *.c
gcc -shared -o liball.os *.o
export LD_LTBRARY_PATH=.:$LD_LIBRARY_PATH
