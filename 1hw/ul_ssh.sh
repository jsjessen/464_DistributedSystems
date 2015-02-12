#!/bin/sh

package=package

echo
echo "Uploading..."

zip -r $package.zip $* 
scp $package.zip jjessen@ssh1.eecs.wsu.edu:~/$package.zip
