#include <stdio.h>

int main() 
{
    int a;
    int b;
    printf("A che età si può prendere la patente nel tuo paese?\n");
    scanf(" %d", &a);
    printf("Quanti anni hai?");
    scanf(" %d", &b);
    if(a>b)
    {
        printf("Non puoi avere la patente\n");
    }
    else
    {
        printf("Puoi avere la patente\n");
    }
}

    