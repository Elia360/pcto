#include <stdio.h>

int main() 
{
    float GradiC;
    printf("inserisci la temperatura in Celsius\n");
    scanf(" %d", &GradiC);
    float GradiF= GradiC*9/5+32;
    float GradiK= GradiC + 273,15;
    if(GradiC<-273,15)
    {
        printf("error\n");
    }
    else
    {
        printf("la temperatura du %f gradi celsius corrsponde a %f gradi Faherenait e a %f gradi kelvin\n", GradiC GradiF GradiK);
     
    }
}