#include <stdio.h>
void slownie(int kwota){
    printf("%d= ",kwota);
    if(kwota>=1000){
        int szescset = kwota /1000;
        printf(" tysiąc");
        kwota -= szescset *1000;
    }
    if(kwota>=900){
        int szescset = kwota /900;
        printf(" dziewięćset");
        kwota -= szescset *900;
    }
    if(kwota>=800){
        int szescset = kwota /800;
        printf(" osiemset");
        kwota -= szescset *800;
    }
    if(kwota>=700){
        int szescset = kwota /700;
        printf(" siedemset");
        kwota -= szescset *700;
    }
    if(kwota>=600){
        int szescset = kwota /600;
        printf(" sześćset");
        kwota -= szescset *600;
    }
    if(kwota>=500){
        int piecset = kwota /500;
        printf(" pięćset");
        kwota -= piecset *500;
    }
    if(kwota>=400){
        int czterysta = kwota /400;
        printf(" czterysta");
        kwota -= czterysta *400;
    }
    if(kwota>=300){
        int trzysta = kwota /300;
        printf(" trzysta");
        kwota -=  trzysta*300;
    }
    if(kwota>=200){
        int dwiescie = kwota /200;
        printf(" dwieście");
        kwota -= dwiescie *200;
    }
    if(kwota>=100){
        int sto = kwota /100;
        printf(" sto");
        kwota -= sto *100;
    }
    if(kwota>=90){
        int piecdziesiat = kwota /90;
        printf(" dziewiecdziesiat");
        kwota -= piecdziesiat * 90;
    }
    if(kwota>=80){
        int piecdziesiat = kwota /80;
        printf(" osiemdziesiat");
        kwota -= piecdziesiat * 80;
    }
    if(kwota>=70){
        int piecdziesiat = kwota /70;
        printf(" siedemdziesiat");
        kwota -= piecdziesiat * 70;
    }
    if(kwota>=60){
        int piecdziesiat = kwota /60;
        printf(" szescdziesiat");
        kwota -= piecdziesiat * 60;
    }
    if(kwota>=50){
        int piecdziesiat = kwota /50;
        printf(" piecdziesiat");
        kwota -= piecdziesiat * 50;
    }
    if(kwota>=40){
        int piecdziesiat = kwota /40;
        printf(" czterdziesci");
        kwota -= piecdziesiat * 40;
    }if(kwota>=30){
        int piecdziesiat = kwota /30;
        printf(" trzydziesci");
        kwota -= piecdziesiat * 30;
    }
    if(kwota>=20){
        int dwadziescia = kwota /20;
        printf(" dwadzieścia");
        kwota -= dwadziescia * 20;
    }
    if(kwota>=19){
        int dziesiec = kwota /19;
        printf(" dziewiętnaście złotych");
        kwota -= dziesiec * 10;
    }
    if(kwota>=18){
        int dziesiec = kwota /18;
        printf(" osiemnaście złotych");
        kwota -= dziesiec * 18;
    }
    if(kwota>=17){
        int dziesiec = kwota /17;
        printf(" siedemnaście złotych");
        kwota -= dziesiec * 17;
    }
    if(kwota>=16){
        int dziesiec = kwota /16;
        printf(" szesnacie złotych");
        kwota -= dziesiec * 16;
    }
    if(kwota>=15){
        int dziesiec = kwota /15;
        printf(" piętnaście zlotych");
        kwota -= dziesiec * 15;
    }
    if(kwota>=14){
        int dziesiec = kwota /14;
        printf(" czternaście złotych");
        kwota -= dziesiec * 14;
    }
    if(kwota>=13){
        int dziesiec = kwota /13;
        printf(" trzynaście złotych");
        kwota -= dziesiec * 13;
    }if(kwota>=12){
        int dziesiec = kwota /12;
        printf(" dwanaście złotych");
        kwota -= dziesiec * 12;
    }if(kwota>=11){
        int dziesiec = kwota /11;
        printf(" jedenaście złotych");
        kwota -= dziesiec * 11;
    }
    if(kwota>=10){
        int dziesiec = kwota /10;
        printf(" dziesięć złotych");
        kwota -= dziesiec * 10;
    }
    if(kwota>=9){
        int dziesiec = kwota /9;
        printf(" dziewięć złotych");
        kwota -= dziesiec * 9;
    }
    if(kwota>=8){
        int dziesiec = kwota /8;
        printf(" osiem złotych");
        kwota -= dziesiec * 8;
    }
    if(kwota>=7){
        int dziesiec = kwota /7;
        printf(" siedem złotych");
        kwota -= dziesiec * 7;
    }
    if(kwota>=6){
        int dziesiec = kwota /6;
        printf(" sześć złotych");
        kwota -= dziesiec * 6;
    }
    if(kwota>=5){
        int piec = kwota /5;
        printf(" pięć złotych");
        kwota -= piec * 5;
    }
    if(kwota>=4){
        int dziesiec = kwota /4;
        printf(" cztery złote ");
        kwota -= dziesiec * 4;
    }
    if(kwota>=3){
        int dziesiec = kwota /3;
        printf(" trzy złote ");
        kwota -= dziesiec * 3;
    }
    if(kwota>=2){
        int dwa = kwota /2;
        printf(" dwa złote ");
        kwota -= dwa * 2;
    }
    if(kwota>=1){
        int jeden = kwota /1;
        printf(" jeden zlotych ");
        kwota -= jeden * 1;
    }
}
int main()
{
    int kwota=0;
    printf("Zadanie trzecie, czytanie słowne liczby\n");
    printf("podaj kwotę\n");
    scanf("%d", &kwota);
    slownie(kwota);
    return 0;
}