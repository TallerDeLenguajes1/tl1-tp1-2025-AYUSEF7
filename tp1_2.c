#include <stdio.h>

int cuadradoNum(int num);
void cuadradoNumVoid(int num);
void direccionContenidoVar(int num);
void invertir(int a, int b);
void orden(int a, int b);

int main()
{
    int num, a, b;

    // Llamada a funciones
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    printf("\n*****Apartado a*****");
    printf("\nEl cuadrado del numero es: %d", cuadradoNum(num));

    printf("\n*****Apartado b*****");
    printf("\nCuadrado desde funcion void");
    cuadradoNumVoid(num);

    printf("\n*****Apartado c*****");
    direccionContenidoVar(num);

    printf("\nIngrese el valor de a: ");
    scanf("%d", &a);
    printf("\nIngrese el valor de b: ");
    scanf("%d", &b);

    printf("\n*****Apartado d*****");
    invertir(a, b);

    printf("\n*****Apartado e*****");
    orden(a, b);

    return 0;
}

int cuadradoNum(int num)
{
    return num * num;
}

void cuadradoNumVoid(int num)
{
    printf("\nEl cuadrado del numero es: %d", num * num);
}

void direccionContenidoVar(int num)
{
    printf("\nLa direccion de memoria de la variable es: %p", &num);
    printf("\nEl contenido de la variable es: %d", num);
}

void invertir(int a, int b)
{
    int aux;

    printf("\nValor variable a: %d", a);
    printf("\nValor variable b: %d", b);

    printf("\nInvirtiendo valores...");

    aux = a;
    a = b;
    b = aux;

    printf("\nValor variable a: %d", a);
    printf("\nValor variable b: %d", b);
}

void orden(int a, int b)
{
    int aux;

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;

        printf("\nEl menor es: %d", a);
        printf("\nEl mayor es: %d", b);
    }
    else
    {
        printf("\nEl menor es: %d", a);
        printf("\nEl mayor es: %d", b);
    }
}