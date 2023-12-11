#!/bin/bash
gcc -c -fpic *.c | gcc -shared -o liball.so *.o | nm -D liball.so
