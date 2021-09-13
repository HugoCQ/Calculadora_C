#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Funcion estilo
void estilo(void)
{
    printf("*************************************\n");
    printf("            -Resutados.-             \n");
    printf("*************************************\n\n");
}
//Funcion estilo
void Bellaarte(void)
{
    printf("\t                        **                                       \n");
    printf("\t                       ****                                       \n");
    printf("\t                      ******                                      \n");
    printf("\t                     **|  | **                                   \n");
    printf("\t                   **|| || |||**                                 \n");   
    printf("\t                ** ------------- **                              \n");
    printf("\t               *  *| ||||||||| |*  *                             \n");
    printf("\t             ***********   ***********                           \n"); 
    printf("\t             || ||   | || | ||   || ||                           \n");
    printf("\t          ------   ------------   -------                       \n");
    printf("\t   ||    ||       -------------        ||      ||               \n");
    printf("\t   **    || * * []| | |   | | |[] * *  ||      **               \n");
    printf("\t  ****   || * * []| | |   | | |[] * *  ||     ****              \n");
    printf("\t  *  *   || * * []| | |   | | |[] * *  ||     *  *              \n");
    printf("\t  --------------------------------------------------           \n");
    printf("\t  --------------------------------------------------           \n\n\n");
}

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
    printf("| %i | %i | %i | %f | %f | %f |",suma,resta,multi,division,raizCuadrada_A,raizCuadrada_B);
}
//Funcion Principal
int main(void)
{
    system("cls");
    system("color 06");
    printf("\t\t--Programas de Matematicas basicas --\n\n");
    Bellaarte();
    int a,b,c;
    c=0;
    printf("Intruccion-\n\n");

    printf("El programa solo permite numeros\n");
    printf("Solo permite se deciameles en el segundo digito\n\n");

    printf("*.-Ingrese el primer valor: ");
	scanf("%i",&a);

    printf("*.-Ingrese el segundo valor: ");
    scanf("%i",&b);
    printf("\n");
    
    if (b==c)
    {
        while (c==0)
        {
            printf("\n");
            printf("|No se puede ingresar un 0 en el segundo valor|\n");    
            printf("Ingrese nuevamente el segundo valor: ");
            scanf("%i",&b);
            if (b!=0)
            {
                estilo();
                calculadora(&a,&b);
                printf("\n\n\n");
                break;
            }
        }
    }
    else
    {
        estilo();
        calculadora(&a,&b);
        printf("\n\n\n");
        
    }
    return 0;
}