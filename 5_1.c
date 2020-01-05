#include <math.h>
#include <stdio.h>

int main ()
{
	printf("Podaj ilość elementów tablicy. Liczba musi być mniejsza niż 100.\n");
	int rozmiar, i, sumplus, summin;
	sumplus=0;
	summin=0;
	scanf("%i", &rozmiar);

	if (rozmiar < 100);
	{
		printf("Podaj kolejne wartości elementów tablicy, po każdej liczbie wciśnij enter.\n");
		int tab[rozmiar];
		for (i=0; i<rozmiar; i++)
		{
			scanf("%i", &tab[i]);
		}
		sumplus, summin = 0;
		for (i=0; i<rozmiar; i++)
		{
			if (tab[i]>0) {sumplus=sumplus+tab[i];}
			else {summin=summin+tab[i];}
		}
	printf("Suma elementów dodatnich: %i\nSuma elementów ujemnych: %i\n", sumplus, summin);
	}
}
