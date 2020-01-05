#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int l, m, n, i, j, k;
	printf("Podaj wartości l, m, n oddzielone spacją.");
	scanf("%i %i %i", &l, &m, &n);
	int tab1[l][m]; //macierz lxm
	int tab2[m][n];	//macierz mxn
	int wyn[l][n]; //macierz wynikowa
	srand(time(NULL));

printf("Macierz A: \n");
	for (i=0; i<l; i++)
	{
		for (j=0; j<m; j++)
		{
			tab1[i][j] = rand()%11+0;
			printf("%d\t ", tab1[i][j]);
			if (j==m-1) {printf("\n");}	
		}
	}

printf("Macierz B: \n");
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			tab2[i][j] = rand()%11+0;
			printf("%d\t ", tab2[i][j]);
			if (j==n-1) {printf("\n");}	
		}
	}
printf("Macierz wynikowa: \n");
//mnozenie macierzy - nie musimy się martwić czy się da, bo liczba kolumn pierwszej zgadza się z liczbą wierszy drugiej
	for(i=0;i<l;i++) //wskazujemy wiersz dla wyniku
	{
		for(j=0;j<n;j++) //wskazujemy kolumne dla wyniku
		{
			//alogrytm mnozenia wartosci
			wyn[i][j]= 0;
			for(k=0;k<n;k++)
			{
				wyn[i][j]=wyn[i][j]+tab1[i][k]*tab2[k][i];
				printf("%d\t ", wyn[i][j]);
				if (j==n-1) {printf("\n");}
			}
		}	
	}


   return 0;

}
