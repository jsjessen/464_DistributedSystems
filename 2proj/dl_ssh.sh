#!/bin/sh

project=2
package=package

echo
echo "Downloading..."

if [ "$#" -lt 1 ]; then
    file=CS464Project${project}jjessen.zip
    scp jjessen@ssh1.eecs.wsu.edu:~/$file $file 
else
    while [ $1 ]
    do
        scp jjessen@ssh1.eecs.wsu.edu:~/$1 $1
        shift
    done
fi
