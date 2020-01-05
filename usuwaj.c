#include<stdio.h>

void deleteComment(int c);
void insideComment(void);
void notComment(int c);

int main(void)
{
    int c,d;

    while((c=getchar())!=EOF)
        deleteComment(c);

    return 0;
}

void deleteComment(int c)
{
    int d;
    if( c == '/')
    {
        if((d=getchar())=='*')
            insideComment();
        else if( d == '/')
        {
            putchar(c);
            deleteComment(d);
        }
        else
        {
            putchar(c);
            putchar(d);
        }
    }
    else if( c == '\''|| c == '"')
        notComment(c);
    else
        putchar(c);
}

void insideComment()
{
    int c,d;

    c = getchar();
    d = getchar();

    while(c!='*' || d !='/')
    {
        c =d;
        d = getchar();
    }
}

void notComment(int c)
{
    int d;

    putchar(c);

    while((d=getchar())!=c)
    {
        putchar(d);

        if(d = '\\')
            putchar(getchar());
    }
    putchar(d);
}