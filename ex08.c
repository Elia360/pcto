#include <stdio.h>

int main() 
{
    float a;
    float b;
    float c;

    printf("scrivi tre numeri mettendo come ultimo numero il più grande");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a+b < c && a+c<b && b+c<a)
    {
        printf("il triangolo si può fare");

    }
    else
    {
        printf(" il triangolo non si può fare");
    }

}