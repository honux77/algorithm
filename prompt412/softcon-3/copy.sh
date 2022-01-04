#!/bin/bash

if [ $# -ne 1 ]; then
    echo "usage: $0 filename"
    exit 1
fi

ext=`echo $1 | cut -d "." -f 2`
filename=`echo $1 | cut -d "." -f 1`

case $ext in
    cpp)
    cp solution.cpp $1
    ;;
    py)
    cp solution.py $1
    ;;
    java)
    cp solution.java $1
    ;;
esac

echo "Don copying $1"
