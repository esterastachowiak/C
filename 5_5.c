#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int a, i, j;
	int suma=0;
	int sumb=0;
	int sumc=0;
	int sumd=0;
	int sume=0;
	srand(time(NULL));
	a=4;

		int tab[a][a];
		for(i=0; i<a; i++) 
		{
      			for(j=0;j<a;j++) 
			{
         			tab[i][j]=rand()%11+0;
				printf("%d\t ", tab[i][j]);
				if (j==a-1) {printf("\n");}
      			}
   		}

//b
		printf("Suma elementów na głównej przekątnej to: ");
		for (i=0; i<a; i++)
		{
			sumb=sumb+tab[i][i];
		}
		printf("%i\n",sumb);

//c
		printf("Suma elementów pod główną przekątną to: ");
		for (i=0; i<a-1; i++)
		{
			sumc=sumc+tab[i+1][i];
		}
		printf("%i\n",sumc);

//d
		printf("Suma elementów drugiego wiersza to: ");
		for (i=0; i<a; i++)
		{
			sumd=sumd+tab[1][i];
		}
		printf("%i\n",sumd);

//e
		printf("Suma elementów trzeciej kolumny to: ");
		for (i=0; i<a; i++)
		{
			sume=sume+tab[i][2];
		}
		printf("%i\n",sume);

   return 0;

}
