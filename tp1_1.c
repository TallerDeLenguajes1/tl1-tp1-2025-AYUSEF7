#include <stdio.h>

int main()
{
    printf("\nHola mundo!");

    int num = 23, *p_num = &num;

    printf("\nEl contenido del puntero: %d", *p_num);
    printf("\nLa direccion de memoria almacenada por el puntero: %p", p_num);
    printf("\nLa direccion de memoria de la variable: %p", &num);
    printf("\nLa direccion de memoria del puntero %p", &p_num);
    printf("\nEl tamanio de memoria utilizado por la variable: %zu", sizeof(num));

    return 0;
}