#include <stdio.h>
#include <stdlib.h>


int main()
{

    int num[10];
    int mayor;
    int menor;
    int i;
    int prom;
    int acum;

        for (i=0;i<10;i++)
            {
            printf ("Ingrese un numero %d: ", i+1);
            scanf("%d",&num[i]);

                if (i== 0)
                {   mayor= num [i];
                    menor=num[i];
                    acum = num[i]++;
                }
                else if (num[i] > mayor) {
                mayor = num[i];
                    acum = num[i]++;

                }
                else if (num [i]< menor) {
                menor = num [i];
                    acum = num[i]++;
                }

            }

           prom = (acum / 10);

    printf ("El numero minimo ingresado es:  %d \n",menor);
    printf ("El numero maximo ingresado es:  %d \n",mayor);
    printf ("El promedio de los numeros ingresados es:  %d \n", prom);


    /*
        for (i=0;i<10;i++)
            {
            if (num[i] > menor && num[i] < mayor)
                {
                printf ("El promedio ingresado es:  %d \n", num[i]);
                }

                break;
            }

            */
    return 0;
}
