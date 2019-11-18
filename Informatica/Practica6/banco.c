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
    /*Primer usuario*/
    printf("Primer Usuario: \n\n");
    printf("Introduzca el DNI del primer usuario: ");
    scanf ("%s",usuario[0].dni);
    getchar();
    printf("Introduzca el nombre del primer usuario: ");
    scanf("%[^\n]", usuario[0].nombre);
    getchar();
    printf("Introduzca la primera cuenta del primer usuario: ");
    scanf("%s", usuario[0].cuenta[0].cuenta);
    getchar();
    printf("Introduzca el saldo de la primera cuenta del primer usuario: ");
    scanf("%f", &usuario[0].cuenta[0].saldo);
    getchar();
    printf("Introduzca la segunda cuenta del primer usuario: ");
    scanf("%s", usuario[0].cuenta[1].cuenta);
    getchar();
    printf("Introduzca el saldo de la segunda cuenta del primer usuario: ");
    scanf("%f", &usuario[0].cuenta[1].saldo);
    getchar();
    usuario[0].saldo_total = usuario[0].cuenta[0].saldo + usuario[0].cuenta[1].saldo;
    if (usuario[0].saldo_total<0)
    {
        usuario[0].moroso=1;
    }else{
        usuario[0].moroso=0;
    }

    /*Segundo usuario*/
    printf("\n\n\nSegundo Usuario: \n\n");
    printf("Introduzca el DNI del segundo usuario: ");
    scanf ("%s",usuario[1].dni);
    getchar();
    printf("Introduzca el nombre del segundo usuario: ");
    scanf("%[^\n]", usuario[1].nombre);
    getchar();
    printf("Introduzca la primera cuenta del segundo usuario: ");
    scanf("%s", usuario[1].cuenta[0].cuenta);
    getchar();
    printf("Introduzca el saldo de la primera cuenta del segundo usuario: ");
    scanf("%f", &usuario[1].cuenta[0].saldo);
    getchar();
    printf("Introduzca la segunda cuenta del segundo usuario: ");
    scanf("%s", usuario[1].cuenta[1].cuenta);
    getchar();
    printf("Introduzca el saldo de la segunda cuenta del segundo usuario: ");
    scanf("%f", &usuario[1].cuenta[1].saldo);
    getchar();
    usuario[1].saldo_total = usuario[1].cuenta[0].saldo + usuario[1].cuenta[1].saldo;
    if (usuario[1].saldo_total<0)
    {
        usuario[1].moroso=1;
    }else{
        usuario[1].moroso=0;
    }
    
    /*Tercer usuario*/
    printf("\n\n\nTercer Usuario: \n\n");
    printf("Introduzca el DNI del tercer usuario: ");
    scanf ("%s",usuario[2].dni);
    getchar();
    printf("Introduzca el nombre del tercer usuario: ");
    scanf("%[^\n]", usuario[2].nombre);
    getchar();
    printf("Introduzca la primera cuenta del tercer usuario: ");
    scanf("%s", usuario[2].cuenta[0].cuenta);
    getchar();
    printf("Introduzca el saldo de la primera cuenta del tercer usuario: ");
    scanf("%f", &usuario[2].cuenta[0].saldo);
    getchar();
    printf("Introduzca la segunda cuenta del tercer usuario: ");
    scanf("%s", usuario[2].cuenta[1].cuenta);
    getchar();
    printf("Introduzca el saldo de la segunda cuenta del tercer usuario: ");
    scanf("%f", &usuario[2].cuenta[1].saldo);
    getchar();
    usuario[2].saldo_total = usuario[2].cuenta[0].saldo + usuario[2].cuenta[1].saldo;
    if (usuario[2].saldo_total<0)
    {
        usuario[2].moroso=1;
    }else{
        usuario[2].moroso=0;
    }

    /*Impresion por pantalla*/

    /*Primer usuario*/
    if (usuario[0].moroso==1)
    {
        printf("\n\n\n\nLos datos del primer cliente son:\n--DNI: %s\n--Nombre: %s\n--Saldo total: %.2f\n--El usuario no tiene permiso de extraccion\n", usuario[0].dni, usuario[0].nombre, usuario[0].saldo_total);
        if (usuario[0].cuenta[0].saldo<0 || usuario[0].cuenta[1].saldo<0 || usuario[0].cuenta[2].saldo<0)
        {
            printf("\n-Sus cuentas con saldo negativo son: \n");
            if (usuario[0].cuenta[0].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[0].cuenta[0].cuenta, usuario[0].cuenta[0].saldo);
            }
            if (usuario[0].cuenta[1].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[0].cuenta[1].cuenta, usuario[0].cuenta[1].saldo);
            }
        }   
    }else if (usuario[0].moroso==0)
    {
        printf("\n\nLos datos del primer cliente son:\n--DNI: %s\n--Nombre: %s\n--Saldo total: %.2f\n", usuario[0].dni, usuario[0].nombre, usuario[0].saldo_total);
        if (usuario[0].cuenta[0].saldo<0 || usuario[0].cuenta[1].saldo<0 || usuario[0].cuenta[2].saldo<0)
        {
            printf("\n-Sus cuentas con saldo negativo son: \n");
            if (usuario[0].cuenta[0].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[0].cuenta[0].cuenta, usuario[0].cuenta[0].saldo);
            }
            if (usuario[0].cuenta[1].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[0].cuenta[1].cuenta, usuario[0].cuenta[1].saldo);
            }
        }
    }

    /*Segundo usuario*/
    if (usuario[1].moroso==1)
    {
        printf("\n\nLos datos del segundo cliente son:\n--DNI: %s\n--Nombre: %s\n--Saldo total: %.2f\n--El usuario no tiene permiso de extraccion\n", usuario[1].dni, usuario[1].nombre, usuario[1].saldo_total);
        if (usuario[1].cuenta[0].saldo<0 || usuario[1].cuenta[1].saldo<0 || usuario[1].cuenta[2].saldo<0)
        {
            printf("\n-Sus cuentas con saldo negativo son: \n");
            if (usuario[1].cuenta[0].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[1].cuenta[0].cuenta, usuario[1].cuenta[0].saldo);
            }
            if (usuario[1].cuenta[1].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[1].cuenta[1].cuenta, usuario[1].cuenta[1].saldo);
            }
        }
    }else if (usuario[1].moroso==0)
    {
        printf("\n\nLos datos del segundo cliente son:\n--DNI: %s\n--Nombre: %s\n--Saldo total: %.2f\n", usuario[1].dni, usuario[1].nombre, usuario[1].saldo_total);
        if (usuario[1].cuenta[0].saldo<0 || usuario[1].cuenta[1].saldo<0 || usuario[1].cuenta[2].saldo<0)
        {
            printf("\n-Sus cuentas con saldo negativo son: \n");
            if (usuario[1].cuenta[0].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[1].cuenta[0].cuenta, usuario[1].cuenta[0].saldo);
            }
            if (usuario[1].cuenta[1].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[1].cuenta[1].cuenta, usuario[1].cuenta[1].saldo);
            }
        }
    }

    /*Tercer usuario*/
    if (usuario[2].moroso==1)
    {
        printf("\n\nLos datos del tercer cliente son:\n--DNI: %s\n--Nombre: %s\n--Saldo total: %.2f\n--El usuario no tiene permiso de extraccion\n", usuario[2].dni, usuario[2].nombre, usuario[2].saldo_total);
        if (usuario[2].cuenta[0].saldo<0 || usuario[2].cuenta[1].saldo<0 || usuario[2].cuenta[2].saldo<0)
        {
            printf("\n-Sus cuentas con saldo negativo son: \n");
            if (usuario[2].cuenta[0].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[2].cuenta[0].cuenta, usuario[2].cuenta[0].saldo);
            }
            if (usuario[2].cuenta[1].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[2].cuenta[1].cuenta, usuario[2].cuenta[1].saldo);
            }
        }
    }else if (usuario[2].moroso==0)
    {
        printf("\n\nLos datos del tercer cliente son:\n--DNI: %s\n--Nombre: %s\n--Saldo total: %.2f\n", usuario[2].dni, usuario[2].nombre, usuario[2].saldo_total);
        if (usuario[2].cuenta[0].saldo<0 || usuario[2].cuenta[1].saldo<0 || usuario[2].cuenta[2].saldo<0)
        {
            printf("\n-Sus cuentas con saldo negativo son: \n");
            if (usuario[2].cuenta[0].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[2].cuenta[0].cuenta, usuario[2].cuenta[0].saldo);
            }
            if (usuario[2].cuenta[1].saldo<0)
            {
                printf("----Cuenta: %s      --saldo: %.2f\n", usuario[2].cuenta[1].cuenta, usuario[2].cuenta[1].saldo);
            }
        }
    }
}
