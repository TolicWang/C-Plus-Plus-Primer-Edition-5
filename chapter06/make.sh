#!/bin/bash
path=`pwd`
g++ --std=c++0x $1 &&
$path/a.out
