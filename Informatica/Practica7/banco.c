#include <stdio.h>
typedef struct{
    char cuenta[25];
    float saldo;
}cuenta_cliente;
typedef struct{
    char dni[10], nombre[50];
    int moroso;
    float saldo_total;
    cuenta_cliente cuenta[2];
}cliente;
cliente usuario[3];

int main(void)
{
    for (int i = 0; i < 3; ++i)
    { 
        printf("\n\n\nIntroduzca el DNI del usuario: ");
        scanf("%s",usuario[i].dni);
        getchar();
        printf("Introduzca el nombre del usuario: ");
        scanf("%[^\n]", usuario[i].nombre);
        getchar();
        for (int u = 0; u < 2; ++u)
        {
            printf("\n--Introduzca la cuenta del usuario: ");
            scanf("%s", usuario[i].cuenta[u].cuenta);
            getchar();
            printf("--Introduzca el saldo de la cuenta del usuario: ");
            scanf("%f", &usuario[i].cuenta[u].saldo);
            getchar();
            usuario[i].saldo_total += usuario[i].cuenta[u].saldo;
        }
    }
    for (int o = 0; o < 3; ++o)
    {
        printf("\n\n\n\nLos datos del cliente son:\n--DNI: %s\n--Nombre: %s\n--Saldo total: %.2f", usuario[o].dni, usuario[o].nombre, usuario[o].saldo_total);
        if (usuario[o].saldo_total<0)
        {
            printf("\n--El usuario no tiene permisos de extraccion\n");
        }
        for (int p = 0; p < 2; ++p)
        {
            if (usuario[o].cuenta[p].saldo<0)
            {
                printf("----Cuenta en negativo: %s      --saldo: %.2f\n", usuario[o].cuenta[p].cuenta, usuario[o].cuenta[p].saldo);
            }
        }
    }
    printf("\n");
}
