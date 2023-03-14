CC=g++
CFLAGS=-I../include -fopenmp

all:main

main: src/main.cpp src/utils/*/*.cpp
	$(CC) $(CFLAGS) $^ -o ./build/$@
