all: run_project

run_project: main.o string_manipulation.o
	gcc main.o string_manipulation.o -o run_project

main.o: main.c
	gcc -c main.c

string_manipulation.o: string_manipulation.c
	gcc -c string_manipulation.c

clean:
	rm *o run_project
