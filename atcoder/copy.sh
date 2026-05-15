#!/bin/bash

if [ $# -ne 2 ]; then
    echo "usage: $0 subfolder filename"
    exit 1
fi

subfolder=$1
filename=`echo $2 | cut -d "." -f 1`

ext=`echo $2 | cut -d "." -f 2`
filename=`echo $2 | cut -d "." -f 1`

# Create subfolder if it doesn't exist
if [ ! -d "$subfolder" ]; then
    mkdir -p "$subfolder"
    echo "Created subfolder: $subfolder"
else
    echo "Subfolder already exists: $subfolder"
fi

case $ext in
    cpp)
    cp solution.cpp $subfolder/$2   
    ;;
    py)
    cp solution.py $subfolder/$2
    ;;
    java)
    cp solution.java $subfolder/$2 
    ;;
esac

if [[ "$(uname)" == "Darwin" ]]; then
    pbpaste > $subfolder/${filename}.txt
else
touch $subfolder/${filename}.txt
fi

touch $subfolder/${filename}-ans.txt
echo "Done copying $2 to $subfolder"
