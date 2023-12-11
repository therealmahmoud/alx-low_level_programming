#!/bin/bash
gcc -c -fpic *.c | gcc -shared -o liball.so *.o | export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH | gcc -std=gnu89 main.c -L. -lliball