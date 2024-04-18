#include <stdio.h>

int main() 
{
    int a;
    int b;
    int c;
    printf("scrivi tre numeri\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a<b<c)
    {
        printf("è una progressione aritmetica\n");
    }
    else
    {
        printf("non è una progressione aritmetica\n");
    }
}