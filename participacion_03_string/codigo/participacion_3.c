#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    char alumno1 [16] ="antonio";
    printf("%s", alumno1);
    char alumno2 [16] ="jose";
    printf("%s", alumno2);

//lista de alumnos
    char alumnos [5][16];
     printf("ingrese los nombres:");
    fgets(alumnos,sizeof(alumnos),stdin);
    printf("%s",alumnos);



    // Opción 1: Arreglo bidimensional (matriz de caracteres)
    char jugadores[5][20];  // 3 jugadores, cada nombre hasta 19 caracteres

    strcpy(jugadores[0], "Ana ");
    strcpy(jugadores[1], "Luis ");
    strcpy(jugadores[2], "Carlos ");

    // Para verificar que funcionó:
    for(int i = 0; i < 3; i++) {
        printf("Jugador %d: %s\n", i, jugadores[i]);


    }



    return 0;
}
