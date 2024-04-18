#include <stdio.h>

int main() 
{
    int anno;
    printf("inserisci un anno\n");
    scanf("%d", &anno);
    if(anno%400==0 || (anno%100 != 0 && anno%4==0))

    {printf("è bisestile\n");}
    else
    {printf("non è bisestile\n");}
}

    
