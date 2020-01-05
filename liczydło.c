#include <stdio.h>


        int silnia(int k)
        {if (k <= 1)
            return (1);
        else
            return (k * silnia(k - 1));
    }
int main(){
        int n;
        int s;
        printf("Program obliczy silnie, Podaj liczbe naturalną n:");
        scanf("%d",&n);
        printf("Podałes liczbę %d ",n);
        if(n<0)printf(" Podałeś liczbę ujemną więc policzony zostanie kwadrat liczby n. Wynik: %d", n*n);
        else{
            s=silnia(n);
            printf("Silnia z %d to %d",n,s);
        }
        return 0;
    }