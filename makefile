GCC = gcc

main: main.c fibRec.c
	$(GCC) $^ -g -lm -o $@

