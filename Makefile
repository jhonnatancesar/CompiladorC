#
# Disciplina de Compiladores.
# Autor: Marco Aurélio Barreto Silva.
#

all: marco-interp

marco-interp: main.o
	gcc -o marco-interp main.o

main.o: ./fontes/main.c ./fontes/interpretador.h
	gcc -o main.o ./fontes/main.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ marco-interp
