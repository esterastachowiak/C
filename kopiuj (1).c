#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int c;
    int znaki = 0;
    int slowa = 0;
    int linie = 0;
    
    c = getchar();
    
    while(c != EOF){
        putchar(c);
        znaki=znaki+1;
        if(c == ' ' || c == '.' || c == ',') slowa=slowa+1;
        if(c == 10) linie=linie+1;
        c = getchar();
    }
    printf("Znaki: %d, slowa: %d, linie: %d",znaki-1,slowa,linie);
    
    
    return EXIT_SUCCESS;
}