add: add.o
	gcc -o add add.o
add.o: add.c
	gcc -c add.c
