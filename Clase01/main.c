#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
int num[3];
int mayor;
int menor;
int i;
for (i=0;i<3;i++)
{printf ("Numero %d: ", i+1)
scanf("%d",&num[i]);
    if (i== 0)
    {   mayor= num [i];
        menor=num[i];
    }
    else if (num[i] > mayor) {
    mayor = num[i];
    }
    else if (num [i]< menor) {
    menor = num [i];
    }
}
printf (Min: %d - Max: %d", meor,mayor);
for (i=0;i<3;i++)
{ if (num[i] > minimo && num[i] < mayor)
{ printf ("El numero %d es el del medio", num[i]}
break;
}

*/
        int num1;
        int num2 ;
        int num3 ;
        int mayor;
        int intermedio ;
        int menor;

    printf("Ingrese el primer numero:");
    scanf("%d", &num1);
    printf("\nIngrese el segundo numero:");
    scanf("%d", &num2);
    printf("\nIngrese el tercer numero:");
    scanf("%d", &num3);


if (num1 > num2)
{
    if (num1 > num3)
        { mayor=num1;
            if (num2 > num3)
                {intermedio = num2;
                menor = num1;}
                    else
                    {intermedio=num3;
                    menor=num2;}
        }

                    else
                    {mayor=num3;
                    intermedio=num1;
                    menor=num2;}
}

                    else
                    {
                        if (num2 > num3)
                            {mayor=num2;
                                if (num1 > num3)
                                    {intermedio=num1;
                                    menor=num3;}
                                    else
                                    {intermedio=num3;
                                    menor=num1;}
                            }
                        else
                            {mayor=num3;
                            intermedio=num2;
                            menor=num1;}
                    }

printf("El numero mayor es: %d", mayor);
printf("\nEl numero intermedio es: %d", intermedio);
printf("\nEl numero menor es: %d", menor);
return 0;
}
