#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int main ()
{
	printf("Podaj ilość elementów tablicy. Liczba musi być mniejsza niż 100.\n");
	int rozmiar, i, n, z, adres;
	adres=0;
	scanf("%i", &rozmiar);
	if (rozmiar<100)
	{
		printf("Podaj kolejne wartości elementów tablicy, po każdej liczbie wciśnij enter.\n");
		int tablica[rozmiar];
		int wynik[rozmiar];
		for (i=0; i<rozmiar; i++)
		{
			scanf("%i", &tablica[i]);
		}

		for (i=0; i<rozmiar; i++)
		{
			printf("wartosc i: %i, wartosc tablicy: %i\n",i,tablica[i]);
			for (n=i+1; n<rozmiar; n++)
			{
				printf("wartosc n: %i, wartosc tablicy: %i\n",n,tablica[n]);
				if (tablica[i]==tablica[n])
				{
					bool exist=false;
					for (z=0; z<rozmiar; z++)
					{
						printf("adres: %i, wartosc z: %i\n",adres,z);		
						if (tablica[i]==wynik[z]) 
							{
								exist=true;
								printf("istnieje juz w wynik!\n");
								//istnieje w tablicy wynikowej, nie rob nic
								break;
							}
					}
					if (exist==false)
						{
							wynik[adres]=tablica[i]; 
							printf("nie istnieje w wynikach! Dodaje %i na adresie wynik[%i]\n",wynik[adres],adres);
							adres=adres+1;
							break;
						}
				}
			}
				
		}
		printf("Powtórzenia: ");
		for (i=0; i<adres; i++)
		{
			printf("%i ", wynik[i]);
		}
		printf("\n");
		}				
}
