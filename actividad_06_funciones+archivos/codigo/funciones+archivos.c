#include <stdio.h>
#include <stdlib.h>

// Prototipos de las funciones requeridas
void capturar(int v[], int n);
void mostrar(int v[], int n);
int filtrar(int origen[], int destino[], int n);
void guardar_archivo(int v[], int n);

int main() {
    int arreglo_original[6];
    int arreglo_filtrado[6]; // Reservamos espacio para 6 por seguridad
    int tamano_filtrado;

    // 1. Capturar los 6 números
    capturar(arreglo_original, 6);

    // 2. Mostrar el arreglo original en pantalla
    printf("\nArreglo original:\n");
    mostrar(arreglo_original, 6);

    // 3. Filtrar los números (deja solo los impares)
    tamano_filtrado = filtrar(arreglo_original, arreglo_filtrado, 6);

    // 4. Mostrar el arreglo filtrado en pantalla
    printf("\nArreglo filtrado (sin pares):\n");
    mostrar(arreglo_filtrado, tamano_filtrado);

    // 5. Guardar el resultado en el archivo "resultado.txt"
    guardar_archivo(arreglo_filtrado, tamano_filtrado);

    printf("\n¡Resultado guardado correctamente en 'resultado.txt'!\n");

    return 0;
}

// 1. Función para capturar los 6 números del usuario
void capturar(int v[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

// 2. Función para mostrar cualquier arreglo en pantalla
void mostrar(int v[], int n) {
    printf("[ ");
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");
}

// 3. Función de filtrado: copia los impares y regresa cuántos fueron
int filtrar(int origen[], int destino[], int n) {
    int j = 0; // Contador para el nuevo arreglo
    for(int i = 0; i < n; i++) {
        // Si el número NO es par (residuo diferente de 0)
        if(origen[i] % 2 != 0) {
            destino[j] = origen[i];
            j++; // Avanzamos la posición en el arreglo destino
        }
    }
    return j; // Regresa el total de elementos que quedaron
}

// 4. Función para guardar el resultado en el archivo de texto
void guardar_archivo(int v[], int n) {
    FILE *f;
    f = fopen("resultado.txt", "w");

    if (f == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    for(int i = 0; i < n; i++) {
        fprintf(f, "%d ", v[i]);
    }

    fclose(f);
}
