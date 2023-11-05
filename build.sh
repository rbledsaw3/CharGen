#!/usr/bin/env sh

set -xe

CFLAGS=(-Wall -Wextra -pedantic)

mkdir -p ./build

g++ "${CFLAGS[@]}" -o ./build/main ./src/main.cpp ./src/roll.cpp ./src/sex.cpp ./src/races.cpp ./src/stats.cpp ./src/cls.cpp
