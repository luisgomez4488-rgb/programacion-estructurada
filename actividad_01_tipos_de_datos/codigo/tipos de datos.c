#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Declaración e inicialización de los tipos de datos primitivos
    char caracter = 'J';
    int entero = 555;
    short entero_corto = 10;
    long entero_largo = 987654;
    float decimal_simple = 5.55f;
    double decimal_double = 9.9999;

    // Encabezado de la tabla para que se vea ordenado en la consola
    printf("%-15s %-10s %-25s\n", "TIPO / TAMANO", "VALOR", "DIR. MEMORIA (DECIMAL)");
    printf("-------------------------------------------------------------------\n");

    // 2. Impresión de cada variable (Tipo/Tamaño, Valor y Dirección en Decimal)
    // Usamos sizeof() para el tamaño y (long long)&variable para forzar la dirección a decimal

    // char
    printf("char (%zu Byte)    %-10c %-25lld\n", sizeof(caracter), caracter, (long long)&caracter);

    // int (Como el ejemplo del pizarrón: variable A -> 555)
    printf("int (%zu Bytes)   %-10d %-25lld\n", sizeof(entero), entero, (long long)&entero);

    // short
    printf("short (%zu Bytes) %-10d %-25lld\n", sizeof(entero_corto), entero_corto, (long long)&entero_corto);

    // long
    printf("long (%zu Bytes)  %-10ld %-25lld\n", sizeof(entero_largo), entero_largo, (long long)&entero_largo);

    // float
    printf("float (%zu Bytes) %-10.2f %-25lld\n", sizeof(decimal_simple), decimal_simple, (long long)&decimal_simple);

    // double
    printf("double (%zu Bytes)%-10.4lf %-25lld\n", sizeof(decimal_double), decimal_double, (long long)&decimal_double);

    printf("-------------------------------------------------------------------\n");

    return 0;
}
