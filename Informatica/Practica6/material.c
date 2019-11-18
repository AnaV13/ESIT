#include <stdio.h>
typedef struct
{
    char codigo[20], nombre[20];
    float precio, precio_final;
}a;
a material[3];
int main(void){
    /*Primer material*/
    printf("\n\nPrimer material\n");
    printf("--Introduzca el codigo del primer material: ");
    scanf ("%[^\n]",material[0].codigo);
    getchar();
    printf("--Introduzca el nombre del primer material: ");
    scanf("%[^\n]", material[0].nombre);
    getchar();
    printf("--Introduzca el precio del primer material: ");
    scanf("%f", &material[0].precio);
    getchar();
    if (material[0].precio<30)
    {
        material[0].precio_final=material[0].precio*1.35;
    }else if (material[0].precio<80)
    {
        material[0].precio_final=material[0].precio*1.2;
    }else if (material[0].precio<200)
    {
        material[0].precio_final=material[0].precio*1.12;
    }else
    {
        material[0].precio_final=material[0].precio;
    }

    /*Segundo material*/
    printf("\nSegundo material\n");
    printf("--Introduzca el codigo del segundo material: ");
    scanf ("%[^\n]",material[1].codigo);
    getchar();
    printf("--Introduzca el nombre del segundo material: ");
    scanf("%[^\n]", material[1].nombre);
    getchar();
    printf("--Introduzca el precio del segundo material: ");
    scanf("%f", &material[1].precio);
    getchar();
    if (material[1].precio<30)
    {
        material[1].precio_final=material[1].precio*1.35;
    }else if (material[1].precio<80)
    {
        material[1].precio_final=material[1].precio*1.2;
    }else if (material[1].precio<200)
    {
        material[1].precio_final=material[1].precio*1.12;
    }else
    {
        material[1].precio_final=material[1].precio;
    }

    /*Tercer material*/
    printf("\nTercer material\n");
    printf("--Introduzca el codigo del tercer material: ");
    scanf ("%[^\n]",material[2].codigo);
    getchar();
    printf("--Introduzca el nombre del tercer material: ");
    scanf("%[^\n]", material[2].nombre);
    getchar();
    printf("--Introduzca el precio del tercer material: ");
    scanf("%f", &material[2].precio);
    getchar();
    if (material[2].precio<30)
    {
        material[2].precio_final=material[2].precio*1.35;
    }else if (material[2].precio<80)
    {
        material[2].precio_final=material[2].precio*1.2;
    }else if (material[2].precio<200)
    {
        material[2].precio_final=material[2].precio*1.12;
    }else
    {
        material[2].precio_final=material[2].precio;
    }

    /*Muestra por pantalla*/
    printf("\n\n\nPrimer material:\n--El codigo del primer material es: %s\n--El nombre del primer material es: %s\n--El precio del primer material es: %.2f€\n\n", material[0].codigo, material[0].nombre, material[0].precio_final);
    printf("Segundo material:\n--El codigo del segundo material es: %s\n--El nombre del segundo material es: %s\n--El precio del segundo material es: %.2f€\n\n", material[1].codigo, material[1].nombre, material[1].precio_final);
    printf("Tercer material:\n--El codigo del tercer material es: %s\n--El nombre del tercer material es: %s\n--El precio del tercer material es: %.2f€\n\n", material[2].codigo, material[2].nombre, material[2].precio_final);
}
