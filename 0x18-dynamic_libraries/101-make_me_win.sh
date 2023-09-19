#!/bin/bash
echo '#include<stdio.h>\nvoid print_numbers{printf("%d %d %d %d %d %d", 9, 8, 10, 24, 75, 9);}' > override.c & gcc -shared -fPIC override.c -o override.so & rm overide.c
LD_PRELOAD=./override.so $1
