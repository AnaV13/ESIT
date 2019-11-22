#include <stdio.h>
typedef struct
{
    char codigo[20], nombre[20];
    float precio, precio_final;
}a;
a material[3];
int main(void){
    for (int i = 0; i < 3; ++i)
    {
        printf("\n\nDatos del material\n");
        printf("--Introduzca el codigo del material: ");
        scanf ("%[^\n]",material[i].codigo);
        getchar();
        printf("--Introduzca el nombre del material: ");
        scanf("%[^\n]", material[i].nombre);
        getchar();
        printf("--Introduzca el precio del material: ");
        scanf("%f", &material[i].precio);
        getchar();
        if (material[i].precio<30)
        {
            material[i].precio_final=material[i].precio*1.35;
        }
        else if (material[i].precio<80)
        {
            material[i].precio_final=material[i].precio*1.2;
        }
        else if (material[i].precio<200)
        {
            material[i].precio_final=material[i].precio*1.12;
        }
        else
        {
            material[i].precio_final=material[i].precio;
        }
    }
    printf("\n\n");
    for (int p = 0; p < 3; ++p)
    {
        printf("\n--El codigo del material es: %s\n--El nombre del material es: %s\n--El precio del material es: %.2f€\n", material[p].codigo, material[p].nombre, material[p].precio_final);
    }
}