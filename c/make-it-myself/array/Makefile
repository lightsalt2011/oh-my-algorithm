all: main.exe

main.exe: main.c array.c simple_sort.c quick_sort.c shell_sort.c heap_sort.c merge_sort.c
	gcc -o $@ $^

clean:
	rm main.exe*
