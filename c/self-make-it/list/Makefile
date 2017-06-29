all: main.exe

main.exe: main.o list.o
	gcc -o $@ $^

main.o: main.c
	gcc -o $@ -c $^
	
list.o: list.c
	gcc -o $@ -c $^

clean:
	rm list.o main.o main.exe
