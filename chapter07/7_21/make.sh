#!/bin/bash
path=`pwd`
g++ --std=c++0x -I. $1 $2 && $path/a.out 
# 编译并执行，运行方式： ./make.sh sale_data.cpp main.cpp
# 等价于下面命令
# g++ --std=c++0x -I. sale_data.cpp main.cpp
# ./a.out

