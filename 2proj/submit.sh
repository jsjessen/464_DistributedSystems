#!/bin/sh

project=2
name=CS464Project${project}jjessen.zip

file[0]="top.idl"
file[1]="top_publisher.cxx"
file[2]="top_subscriber.cxx"
file[3]="TopUtil.cxx"
file[4]="TopUtil.h"
file[4]="Makefile"
file[5]="output/*"

rm -f $name

for f in "${file[@]}"
do
    zip $name $f
done

cp $git_pathname $home_pathname
