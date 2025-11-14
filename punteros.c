#include <stdio.h>
#include <stdint.h> /* Necesario para uint32_t */

/* Define la estructura que provoca padding */
struct tipo_ejemplo {
    char campo1;     /* 1 byte */
    int campo2;      /* 4 bytes */
};

struct tipo_ejemplo ejemplo;

int main(void)
{
    /* Variables para el analisis */
    uint32_t dir_campo1;
    uint32_t dir_campo2;
    uint32_t distancia;
    
    printf("--- Analisis de Padding con Aritmetica Numerica ---\n");
    
    /* 1. Almacenar las direcciones como numeros de 32 bits */
    /* TODO */
    dir_campo1 =(uint32_t) &(ejemplo.campo1);
    dir_campo2 =(uint32_t) &(ejemplo.campo2);

    /* 2. Calcular la distancia exacta en bytes mediante la resta de enteros */
    distancia = dir_campo2 - dir_campo1;

    /* 3. Imprimir resultados */
    /* TODO: imprimir direcciones de campo1 y campo2 */
    printf("Direccion de campo1 : %08X\n",&dir_campo1);
    printf("Direccion de campo2 : %08X\n",&dir_campo2);



    printf("Distancia entre campo1 y campo2 (bytes): %u\n", distancia);

    return 0;
}
