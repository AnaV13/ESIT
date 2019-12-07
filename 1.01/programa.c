#include <stdio.h>
int matriza[3][3],matrizb[3][3],minimo,x;
int main(void){
	FILE *matriz1, *matriz2, *Resultados;
	matriz1=fopen("matriz1.txt", "r");
	if (matriz1==NULL)
	{
		printf("Ha habido un error al abrir el fichero\n");
	}
	matriz2=fopen("matriz2.txt", "r");
	if (matriz2==NULL)
	{
		printf("Ha habido un error al abrir el fichero\n");
	}
	Resultados=fopen("Resultados.txt", "w");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			fscanf(matriz1,"%d",&matriza[i][j]);
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			fscanf(matriz2,"%d",&matrizb[i][j]);
		}
	}
	fprintf(Resultados, "%s", "Suma: \n");
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			fprintf(Resultados,"%d",matriza[i][j]+matrizb[i][j]);
			fprintf(Resultados, "%s", " ");
		}
		fprintf(Resultados, "%s", "\n");
	}
	fprintf(Resultados, "%s", "\n\nSuma de elementos por fila del fichero matriz1: \n");
	for (int i = 0; i < 3; ++i)
	{
		x=0;
		for (int j = 0; j < 3; ++j)
		{
			x+=matriza[i][j];
		}
		fprintf(Resultados, "%d", x);
		fprintf(Resultados, "%s", "\n");
	}
	fprintf(Resultados, "%s", "\n\nMinimo elemento de la diagonal principal del fichero matriz2: \n");
	x=matrizb[0][0];
	for (int i = 0; i < 3; ++i)
	{
		if (x>matrizb[i][i])
		{
			x=matrizb[i][i];
		}
	}
	fprintf(Resultados, "%d", x);
	fclose(matriz1);
	fclose(matriz2);
	fclose(Resultados);
}