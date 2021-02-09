cc = gcc
cflags = -ansi -Wpedantic -Os


buildDir = out
clientDir = client
serverDir = server

all: client-bin server-bin

client-bin:
	gcc $(clientDir)/src/*.c -o $(buildDir)/client/client

server-bin:
	gcc $(serverDir)/src/*.c -o $(buildDir)/server/server