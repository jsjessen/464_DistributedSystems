#!/bin/sh

project=1
name=CS464Project${project}jessen.zip
git_pathname=/net/u/jjessen/pvt/464_DistributedSystems/${project}hw/$name
home_pathname=/net/u/jjessen/pvt/$name

file[0]="little.idl"
file[1]="little_publisher.cxx"
file[2]="little_subscriber.cxx"
file[3]="output/pub.out"
file[4]="output/sub.out"

rm -f $git_pathname
rm -f $home_pathname

for f in "${file[@]}"
do
    zip $git_pathname $f
done

cp $git_pathname $home_pathname
