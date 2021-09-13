#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Funcion secundaria 
void calculadora(int *a, int *b)
{
    int suma,multi,resta;
    float division,raizCuadrada_A,raizCuadrada_B;
    suma= *a + *b;
    resta= *a - *b;
    multi= *a * *b;
    division=(float)*a / (float)*b;
    raizCuadrada_A = sqrt(*a);
    raizCuadrada_B = sqrt(*b);
    printf("Resultado:| %i | %i | %i | %f | %f | %f |",suma,resta,multi,division,raizCuadrada_A,raizCuadrada_B);
}
//Funcion Principal
void main(void)
{
    int a,b,c;
    c=0;
    
    printf("Ingrese el primer digito: ");
	scanf("%d",&a);

    printf("Ingrese el segundo digito: ");
    scanf("%d",&b);
    if (b==c)
    {
        while (c==0)
        {
            printf("\n");
            printf("|No se puede ingresar un 0 en el segundo digito|\n");    
            printf("Ingrese el segundo digito: ");
            scanf("%i",&b);
            if (b!=0)
            {
                calculadora(&a,&b);
                break;
            }
        }
    }
    else
    {
        calculadora(&a,&b);
    }
}