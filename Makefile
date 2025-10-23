all: punteros alineacion

punteros: punteros.c
	cc -Wall punteros.c -o punteros

alineacion: alineacion.c
	cc -Wall alineacion.c -o alineacion
