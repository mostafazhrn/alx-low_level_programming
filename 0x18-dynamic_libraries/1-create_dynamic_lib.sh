#!/bin/bash
gcc -fPIC *.c
gcc -shared *o -o liball.so
export LD_LIBRRY_PATH=.:$LD_LIBRARY_PATH
