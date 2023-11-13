#!/bin/bash
wget -P .. https://github.com/mostafazhrn/gigamil/blob/main/lib1stTry.so
export LD_PRELOAD="PWD/../lib1stTry.so"
