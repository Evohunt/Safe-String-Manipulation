all: run_project

run_project: main.o string_manipulation.o input_generator.o string_checker.o
	gcc main.o string_manipulation.o input_generator.o string_checker.o -o run_project

main.o: main.c
	gcc -c main.c

string_manipulation.o: string_manipulation.c
	gcc -c string_manipulation.c

string_checker.o: string_checker.c
	gcc -c string_checker.c

input_generator.o: input_generator.c
	gcc -c input_generator.c

clean:
	rm *o run_project
