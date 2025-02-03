#!/bin/bash

if [ $# -lt 1 ]; then
    echo "usage: $0 filename"
    exit 1
fi

ext=`echo $1 | cut -d "." -f 2`
filename=`echo $1 | cut -d "." -f 1`

echo "Compile $1.."

# compile 
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

# run
echo "Run $1..."
INPUT=$filename.txt
echo "Input file: $INPUT"

case $ext in
    java)
    java $filename < $INPUT > result.txt
    ;;
    cpp)
    ./a.out < $INPUT > result.txt
    ;;
    py)
    python3 $1 < $INPUT > result.txt
esac

echo
echo 'Run Result:'
cat result.txt
echo

if [ $# -eq 2 ]; then
    echo "Compare result with $filename-ans.txt... "
    diff result.txt $filename-ans.txt
    if [ $? -ne 0 ]; then
        echo "Wrong Answer"
        exit 1
    else
        echo "Accepted"
    fi
fi

rm result.txt
