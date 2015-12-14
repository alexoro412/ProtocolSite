#!/bin/sh
if [ $# -lt 1 ]
then
echo "Usage: new [filename]"
fi
cp base.html "$1".html
