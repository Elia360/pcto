#include <stdio.h>

int main() 
{
    int a;
    int b;

    printf("inserisci il numero più grande\n");
    scanf(" %d", &a);
    printf("inserisci il numero più piccolo\n");
    scanf("%d", &b);
    if(a%b==0)
    { 
        printf("il numero grande è multiplo del secondo numero piccolo\n");
    }
    else
    {
        printf("il numero grande non è multiplo del secondo numero piccolo\n");
    }
}