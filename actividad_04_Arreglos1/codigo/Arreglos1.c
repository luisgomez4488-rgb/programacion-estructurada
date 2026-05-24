#include <stdio.h>

int main() {
    // Declaramos un array para 4 temperaturas
    float temperaturas[4];
    int i;

    printf("=== REGISTRO DE 4 TEMPERATURAS ===\n\n");

    // Pedimos las 4 temperaturas usando un ciclo
    for(i = 0; i < 4; i++) {
        printf("Ingrese la temperatura %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    // Mostramos las temperaturas ingresadas
    printf("\n=== TEMPERATURAS REGISTRADAS ===\n");
    for(i = 0; i < 4; i++) {
        printf("Temperatura %d: %.2f°C\n", i + 1, temperaturas[i]);
    }

    // Calculamos el promedio
    float suma = 0;
    for(i = 0; i < 4; i++) {
        suma = suma + temperaturas[i];
    }
    float promedio = suma / 4;

    printf("\n=== ESTADÍSTICAS ===\n");
    printf("Suma total: %.2f°C\n", suma);
    printf("Promedio: %.2f°C\n", promedio);

    return 0;
}
