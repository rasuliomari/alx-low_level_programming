#!/bin/bash
gcc -c -Wall -Werror -Wextra -c *.c
ar -rc liball.a *.o
