#!/bin/bash
gcc -Wall -Wextra $1
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi
printf -- "\n----------------------------------------"
printf -- "\nRUNNING C CODE FILE - $1"
printf -- "\n----------------------------------------\n\n" 
./a.out
rm a.out
printf -- "\n\n----------------------------------------"
printf -- "\nExecution Complete with exit code $?"
printf -- "\n----------------------------------------\n\n"
