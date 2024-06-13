#include <stdio.h>
#include <string.h>
#include "funciones.h"

void imprimirAlumnos(char alumnos[1][2][20], double notas[1][3]) {
    printf("Alumnos:\n");
    for (int i = 0; i < 1; i++) {
        double promedio = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
        printf("Nombre: %s %s\n", alumnos[i][0], alumnos[i][1]);
        printf("Notas: %.1lf, %.1lf, %.1lf\n", notas[i][0], notas[i][1], notas[i][2]);
        printf("Promedio: %.1lf\n", promedio);
        if (promedio >= 6.0) {
            printf("Estado: Aprobado\n\n");
        } else {
            printf("Estado: No Aprobado\n\n");
        }
    }
}

void buscarAlumnoApellido(char alumnos[1][2][20], double notas[1][3]) {
    char apellido[20];
    printf("Ingrese el apellido del alumno a buscar: ");
    scanf("%s", apellido);
    for (int i = 0; i < 1; i++) {
        if (strcmp(alumnos[i][1], apellido) == 0) {
            double promedio = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
            printf("Nombre: %s %s\n", alumnos[i][0], alumnos[i][1]);
            printf("Notas: %.1lf, %.1lf, %.1lf\n", notas[i][0], notas[i][1], notas[i][2]);
            printf("Promedio: %.1lf\n", promedio);
            if (promedio >= 6.0) {
                printf("Estado: Aprobado\n\n");
            } else {
                printf("Estado: No Aprobado\n\n");
            }
            return;
        }
    }
    printf("Alumno no encontrado.\n");
}

void editarCalificaciones(char alumnos[1][2][20], double notas[1][3]) {
    int num;
    char apellido[20];
    printf("Ingrese el apellido del alumno cuyas notas desea editar: ");
    scanf("%s", apellido);
    for (int i = 0; i < 1; i++) {
        if (strcmp(alumnos[i][1], apellido) == 0) {
            printf("Ingrese el número de la nota que desea editar (1-3): ");
            scanf("%d", &num);
            if (num < 1 || num > 3) {
                printf("Número de nota inválido.\n");
                return;
            }
            printf("Ingrese la nueva nota %d: ", num);
            scanf("%lf", &notas[i][num-1]);
            printf("Nota actualizada.\n");
            return;
        }
    }
    printf("Alumno no encontrado.\n");
}

