#include <stdio.h>

struct Empleado {
    char nombre[50];
    char sexo[50];
    float sueldo;
};

int main() {
    struct Empleado empleado;

  
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &empleado.sueldo);

    printf("\nInformación del empleado:\n");
    printf("Nombre: %s\n", empleado.nombre
    printf("Sexo: %s\n", empleado.sexo);
    printf("Sueldo: %.2f\n", empleado.sueldo);

    return 0;
}
