#!/bin/bash

# Set compiler and flags
CC=clang
CFLAGS="-std=c99 -Wall -Wextra -O2 -Wvarargs -Werror -Wno-unused-function -Wno-format-security -Wno-incompatible-pointer-types-discards-qualifiers -Wno-unused-but-set-variable -Wno-int-to-void-pointer-cast"

# Get the script's directory
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

# Check if a source file is provided
if [ -z "$1" ]; then
    echo "Usage: $0 <source_file>"
    exit 1
fi

SRC="$1"
OUT="$SCRIPT_DIR/bin/$(basename "$SRC" .c)"

# Ensure the bin directory exists
mkdir -p "$(dirname "$OUT")"

# Debugging
echo "Compiling $SRC -> $OUT"
echo "Bin directory: $(dirname "$OUT")"

# Compile the program
$CC $CFLAGS $SRC -o "$OUT"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Build successful: $OUT"
else
    echo "Build failed"
    exit 1
fi
