#!/bin/bash

if [ $# -ne 1 ]; then
    echo "usage: $0 filename"
    exit 1
fi

ext=`echo $1 | cut -d "." -f 2`
filename=`echo $1 | cut -d "." -f 1`

echo "Compile $1.."
case $ext in
    java)
    javac $1
    ;;
    cpp)
    g++ $1 -std=c++17
    ;;
esac    

if [ $? -ne 0 ]; then
    echo "$1 compile error"
    exit 1
fi

echo "Run $1.."
INPUT=$filename.txt
echo Input file: $INPUT

case $ext in
    java)
    java $filename < $INPUT
    ;;
    cpp)
    ./a.out < $INPUT
    ;;
    py)
    python3 $1 < $INPUT
esac
