#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -L. -shared -o liball.so
