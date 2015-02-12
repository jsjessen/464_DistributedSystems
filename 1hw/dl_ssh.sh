#!/bin/sh

package=package

echo
echo "Uploading..."

while [ $1 ]
do
    scp jjessen@ssh1.eecs.wsu.edu:~/$1 $1
    shift
done
