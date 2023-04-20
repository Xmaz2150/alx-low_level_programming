#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c ./*.c;
ar -rc ${1}.a ./*.o;
ranlib ${1}.a
