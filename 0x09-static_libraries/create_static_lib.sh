#!/bin/bash
gcc -wall -pedactic -werror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
