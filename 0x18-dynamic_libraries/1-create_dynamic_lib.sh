#!/bin/bash
gcc -c -fpic *.c | gcc -shared -o liball.so *.o | gcc -std=gnu89 main.c -L. -lliball