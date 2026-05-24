#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float promedio;
    int reprobadas;
    int faltas;

    // 1. Solicitar los datos al usuario
    printf("Edad: ");
    scanf("%d", &edad);

    printf("Promedio: ");
    scanf("%f", &promedio);

    printf("Materias reprobadas: ");
    scanf("%d", &reprobadas);

    printf("Faltas acumuladas: ");
    scanf("%d", &faltas);

    printf("\n--- RESULTADOS DE EVALUACION ---\n");

    // 2. Logica para el Estado de Reinscripcion
    if (reprobadas > 3) {
        printf("Estado: No puedes reinscribirte.\n");
    }
    else if (reprobadas <= 2) {
        printf("Estado: Puede reinscribirse.\n");
    }
    else if (reprobadas == 3) {
        printf("Estado: Revision especial.\n");
    }



    return 0;
}
