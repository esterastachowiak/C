#include <math.h>
#include <stdio.h>

int main ()
{
	printf("Podaj ilość elementów tablicy. Liczba musi być mniejsza niż 100.\n");
	int rozmiar, i, suma;
	suma=0;
	scanf("%i", &rozmiar);
	if (rozmiar < 100);
	{
		printf("Podaj kolejne wartości elementów tablicy, po każdej liczbie wciśnij enter.\n");
		int tab[rozmiar];
		int wyn[rozmiar];
		for (i=0; i<rozmiar; i++)
		{
			scanf("%i", &tab[i]);
			suma=suma+tab[i];
			wyn[i]=suma;
		}
		printf("Wyniki: ");
		for (i=0; i<rozmiar; i++)
		{
			printf("%i ", wyn[i]);
		}
		printf("\n");
				
	}
}
