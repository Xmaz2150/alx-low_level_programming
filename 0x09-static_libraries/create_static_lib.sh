#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c ./*.c;
ar -rc $1 ./*.o;
ranlib $1
