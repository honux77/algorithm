#!/bin/bash

if [ $# -ne 1 ]; then
    echo "usage: $0 filename"
    exit 1
fi

g++ $1

echo "Compile $1.."
if [ $? -ne 0 ]; then
    echo "$1 compile error"
    exit 1
fi

echo "Run $1.."
./a.out < input.txt