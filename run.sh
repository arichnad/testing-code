#!/bin/bash

g++ -static-libstdc++ -fPIC -shared -o libone.so one.cpp &&
	g++ -static-libstdc++ -fPIC -shared -o libtwo.so two.cpp &&
	g++ -L. -omain main.cpp -lone -ltwo &&
	LD_LIBRARY_PATH=. ./main
