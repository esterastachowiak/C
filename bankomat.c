#include <stdio.h>

void bankomat(float kwota){
    printf("%1.2fzł= ",kwota);
    if(kwota>=500){
        int piecset = kwota /500;
        printf("+ %d * 500zł ",piecset);
        kwota -= piecset *500;
    }
    if(kwota>=200){
        int dwiescie = kwota /200;
        printf("+ %d * 200zł ",dwiescie);
        kwota -= dwiescie *200;
    }
    if(kwota>=100){
        int sto = kwota /100;
        printf("+ %d * 100zł ",sto);
        kwota -= sto *100;
    }
    if(kwota>=50){
        int piecdziesiat = kwota /50;
        printf("+%d * 50zł ",piecdziesiat);
        kwota -= piecdziesiat * 50;
    }
    if(kwota>=20){
        int dwadziescia = kwota /20;
        printf("+ %d * 20zł ",dwadziescia);
        kwota -= dwadziescia * 20;
    }
    if(kwota>=10){
        int dziesiec = kwota /10;
        printf("+ %d * 10zł ",dziesiec);
        kwota -= dziesiec * 10;
    }
    if(kwota>=5){
        int piec = kwota /5;
        printf("+ %d * 5zł ",piec);
        kwota -= piec * 5;
    }
    if(kwota>=2){
        int dwa = kwota /2;
        printf("+ %d * 2zł ",dwa);
        kwota -= dwa * 2;
    }
    if(kwota>=1){
        int jeden = kwota /1;
        printf("+ %d * 1zł ",jeden);
        kwota -= jeden * 1;
    }
    if(kwota>=0.5){
        int pisiontgroszy = kwota /0.5;
        printf("+ %d * 0.5zł ",pisiontgroszy);
        kwota -= pisiontgroszy * 0.5;
    }
    if(kwota>=0.2){
        int dwadzgroszy = kwota /0.2;
        printf("+ %d * 0.2zł ",dwadzgroszy);
        kwota -= dwadzgroszy * 0.2;
    }
    if(kwota>=0.1){
        int dziesgroszy = kwota /0.1;
        printf("+ %d * 0.1zł ",dziesgroszy );
        kwota -= dziesgroszy  * 0.1;
    }
    if(kwota>=0.05){
        int piecgroszy = kwota /0.05;
        printf("+ %d * 0.05zł ",piecgroszy );
        kwota -=piecgroszy  * 0.05;
    }
    if(kwota>=0.02){
        int dwagrosze = kwota /0.02;
        printf("+ %d * 0.02zł ",dwagrosze);
        kwota -= dwagrosze  * 0.02;
    }
    if(kwota>=0.01){
        int jedengrosz = kwota /0.01;
        printf("+ %d * 0.01zł ",jedengrosz );
        kwota -= jedengrosz  * 0.01;
    }
}
int main()
{
    float kwota=0;
    printf("Zadanie drugie, obliczanie częsci skladowych kwoty\n");
    printf("podaj kwotę\n");
    scanf("%f", &kwota);
    bankomat(kwota);
    return 0;
}