//Napisi program koji pretvara kilograme u grame.


#include<stdio.h>

int main()
{
    float m, grami;
    printf("Unesite masu po zelji u kilogramima: ");
    scanf("%f", &m);
    grami = m * 1000;
    printf("Masa u gramima je = %0.2f", grami);
    return 0;
}


