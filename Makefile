CC=g++
CFLAGS=-I../include

all:main

main: src/main.cpp src/utils/*/*.cpp
	$(CC) $(CFLAGS) $^ -o ./build/$@
