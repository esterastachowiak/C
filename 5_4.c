#include <math.h>
#include <stdio.h>

int main ()
{
	printf("Podaj rozmiar macierzy. Liczba musi być mniejsza niż 100.\n");
	int roz, i, j, sum;
	sum=0;
	scanf("%i", &roz);
	if (roz < 100);
	{
		int tab[roz][roz];
		for(i=0; i<roz; i++) 
		{
      			for(j=0;j<roz;j++) 
			{
         			printf("Podaj wartość komórki a[%d][%d]:", i+1, j+1);
         			scanf("%d\t", &tab[i][j]);
      			}
   		}

		printf("Wynik: ");
		for (i=0; i<roz; i++)
		{
			sum=sum+tab[i][i];
		}
		printf("%i\n",sum);
				
	}
}
