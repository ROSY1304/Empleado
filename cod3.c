#include <stdio.h>

struct Empleado {
    char nombre[50];
    char sexo[50];
    float sueldo;
};

int main() {
    struct Empleado empleado;

    printf("Ingrese el nombre del empleado: ");
    scanf("%s", empleado.nombre);
    printf("Ingrese el sexo del empleado (MASCULINO/FEMENINO): ");
    scanf("%s", empleado.sexo);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &empleado.sueldo);

    printf("\nInformación del empleado:\n");
    printf("Nombre: %s\n", empleado.nombre
    printf("Sexo: %s\n", empleado.sexo);
    printf("Sueldo: %.2f\n", empleado.sueldo);

    return 0;
}
