#!/bin/bash
gcc -fPTC -c *.c
gcc -shared *.o -o liball.os
