#include <stdio.h>
#include <time.h>

/* +1 after tm.tm_hour is added because actually (11.11.2019) timezone in Poland is +1 */
void convertToBinary(int n)
{
    if(n/2!=0){
        convertToBinary(n/2);
    }
    printf("%d",n%2);
}
void time24h(){
    time_t t=time(NULL);
    struct tm tm =*localtime(&t);
    printf("Format 24h: %d:%d:%d",tm.tm_hour +1, tm.tm_min,tm.tm_sec);
}
void time12h(){
    time_t t=time(NULL);
    struct tm tm =*localtime(&t);
    if(tm.tm_hour<12){
        printf("Format 12h: %d:%d:%d AM",tm.tm_hour +1,tm.tm_min,tm.tm_sec);
    }
    else{
        printf("Format 12h: %d:%d:%d PM",tm.tm_hour-12+1,tm.tm_min,tm.tm_sec);
    }
}
void timeBinary(){
    time_t t=time(NULL);
    struct tm tm =*localtime(&t);
    printf("Format Binary: ");
    convertToBinary(tm.tm_hour+1);
    printf(":");
    convertToBinary(tm.tm_min);
    printf(":");
    convertToBinary(tm.tm_sec);
}
void timeHex(){
    time_t t=time(NULL);
    struct tm tm =*localtime(&t);
    printf("Format Hex: 0x%x:0x%x:0x%x",tm.tm_hour +1, tm.tm_min,tm.tm_sec);
}
int main(){
    int choose=0;
    printf("Program do wyświetlenia formatu czasu\n1_Format 24h\n2_Format 12h\n3_Format Hex\n4_Format Bin\n\n->");
    scanf("%d", &choose);
    switch (choose) {
        case 1:time24h();break;
        case 2:time12h();break;
        case 3:timeHex();break;
        case 4:timeBinary();break;
    }
       return 0;
}