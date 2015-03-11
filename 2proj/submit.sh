#!/bin/bash

project=2
name=CS464Project${project}jjessen.zip

file[0]="top.idl"
file[1]="top_publisher.cxx"
file[2]="top_subscriber.cxx"
file[3]="TopUtil.cxx"
file[4]="TopUtil.h"
file[5]="Makefile"
file[6]="output/*"

rm -f $name

for f in "${file[@]}"
do
    zip $name ./$f
done
