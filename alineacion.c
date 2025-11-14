#include <stdio.h>
#include <stdint.h>

#define PAGE_SIZE 4096

/* Aquí se define una macro con dos parámetros: addr (la dirección) y
   size (el tamaño al que alinear). Se proporciona una implementación
   incorrecta para que veas cómo se pueden usar los parámetros dentro de
   la macro. Ten en cuenta que la macro no puede ocupar más de una línea.

   TODO: Corrige la macro ALIGN_UP aquí después de entender el proceso */
#define ALIGN_UP(addr, size) addr + (size-1) & ~(size-1)

int main(void)
{
    /* Dirección de ejemplo no alineada */
    const uint32_t addr = 0x12345678;  /* Dirección arbitraria */
    uint32_t aligned_addr;
    const uint32_t addr2 = 0xABCDEF12;
    uint32_t aligned_addr2;

    printf("--- Alineación de direcciones a tamaño de página ---\n");

    /* 1. Calcular la dirección alineada manualmente */
    /* TODO: Alinear addr al siguiente múltiplo de PAGE_SIZE (4096) */
    aligned_addr = addr + (PAGE_SIZE-1) & ~(PAGE_SIZE-1); 


     /* Corrige esta línea */

    /* 2. Imprimir resultados */
    printf("Dirección original: 0x%08X\n", addr);
    printf("Dirección alineada: 0x%08X\n", aligned_addr);

    /* 3. Usar la macro ALIGN_UP para alinear otra dirección */
    aligned_addr2 = ALIGN_UP(addr2, PAGE_SIZE);
    printf("Dirección original (macro): 0x%08X\n", addr2);
    printf("Dirección alineada (macro): 0x%08X\n", aligned_addr2);

    return 0;
}
