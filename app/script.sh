#!/bin/bash

# Create the directory
mkdir -p /challenge

# Create the random data file
head -c 100000 /dev/urandom | base64 > /challenge/data.txt
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#
#

# Slowly construct the flag in parts
FLAG_PARTS=("C" "I" "S" "O" "c" "t" "f" "{" "W" "h" "a" "l" "i" "n" "D" "o" "c" "k" "e" "r" "I" "s" "A" "w" "e" "s" "o" "m" "e" "}")

FLAG=""

# Construct the flag
for PART in "${FLAG_PARTS[@]}"; do
    FLAG+="$PART"
    # sleep 0.5  # Uncomment if you want to add delay
done

# Insert the flag at line 100 in the file
sed -i '100i '"$FLAG"'' /challenge/data.txt

# Start a bash session
exec bash


