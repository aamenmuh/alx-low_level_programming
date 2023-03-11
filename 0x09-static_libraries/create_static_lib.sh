#!/bin/bash

# Find all .c files in the current directory
SRC=$(find . -type f -name "*.c")

# Compile each .c file into a .o object file
for file in $SRC; do
  gcc -c $file -o ${file%.c}.o
done

# Create a static library from all the .o files
ar rcs liball.a *.o

# Clean up the .o files
rm -f *.o
