#!/bin/bash

if [ $# -ne  1 ]; then
  echo "Usage: $0 number_of_round"
  exit 1
fi

round="round-$1"

if [ -d $round ]; then
  echo "$round already exists"
  exit 1
fi

cp -a template $round
echo "Done to create $round"
