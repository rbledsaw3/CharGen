#!/usr/bin/env bash

set -xe

CFLAGS=(-Wall -Wextra -pedantic)

mkdir -p ./build/test

g++ "${CFLAGS[@]}" -o ./build/test/main ./test/test.cpp ./src/roll.cpp
