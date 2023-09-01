#!/bin/bash
#collect all ,c files
c_files=$(ls *.c 2>/dev/null)
#compile each ,c file
for file in $c_files; do
	gcc -c "$file"
done

ar rc liball.a *.o

rm -f *.o
