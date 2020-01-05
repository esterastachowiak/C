
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20


typedef struct dana
{
int wiek;
char* imie;
} dana;

void Drukuj(dana arr[]){
    int i;
    for(i=0;i<SIZE;++i) {
        printf("%i %s\n",arr[i].wiek,arr[i].imie);
    }
}
int KolejLiczby (const void * a, const void * b) {
    return ( (const dana*)a)->wiek - ((const dana*)b)->wiek ;
}

int KolejImie (const void * a, const void * b) {
    return ((const dana *) a)->imie[0] - ((const dana *) b)->imie[0];
}
int main() {
    char* Imiona[20]={"Kamil","Marcin","Weronika","Asia","Łukasz","Wojtek","Estera","Beata","Laura","Lena","Tomasz","Jagoda","Daria","Witek","Kamila","Grażyna","Karina","Elżbieta","Ewelina","Aleksander"};
    dana tablica[SIZE];
    int i;
    srand(time(NULL));

    for(i=0;i<SIZE;++i) {
        tablica[i].wiek =( rand() % 101);
        tablica[i].imie = Imiona[(rand() % 20)];
    }
    printf("Przed sortowaniem Twoja tablica wygląda tak:\n");
    Drukuj(tablica);
    qsort(tablica, SIZE, sizeof(dana), KolejLiczby);
    printf("\nPosortowana tablica (ze względu na wiek) wygląda tak:\n");
    Drukuj(tablica);
    qsort(tablica, SIZE, sizeof(dana), KolejImie);
    printf("\nPosortowana tablica (ze względu na imie) wygląda tak:\n");
    Drukuj(tablica);

    return 0;
}
