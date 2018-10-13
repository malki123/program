#ifndef _KALKULATOR_H
#define _KALKULATOR_H
#include <stdio.h>

void wczytaj_wspolczynniki(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2) {
    printf("Podaj a1: "); scanf("%lf", a1);
    printf("Podaj b1: "); scanf("%lf", b1);
    printf("Podaj c1: "); scanf("%lf", c1);
    printf("Podaj a2: "); scanf("%lf", a2);
    printf("Podaj b2: "); scanf("%lf", b2);
    printf("Podaj c2: "); scanf("%lf", c2);
}

void wyswietl_informacje() {
    printf("Program rozwiązuje układ dwóch równań liniowych.\n");
    printf("a1*x + b1*y = c1\n");
    printf("a2*x + b2*y = c2\n");
    printf("\n");
    printf("Podaj współczynniki. \n");
}


void wyznacznik_moj() {
    int a1,a2,b1,b2,c1,c2,x,y,w,wx,wy;
    printf("Podaj a1:");
    scanf("%i\n", &a1);
    printf("Podaj b1:");
    scanf("%i\n", &b1);
    printf("Podaj a2:");
    scanf("%i\n", &a2);
    printf("Podaj b2:");
    scanf("%i\n", &b2);
    printf("Podaj c1:");
    scanf("%i\n", &c1);
    printf("Podaj c2:");
    scanf("%i\n", &c2);


    c1=a1*x+b1*y;
    c2=a2*x+b2*y;

    w=a1*b2-b1*a2;
    wx=c1*b2-b1*c2;
    wy=a1*c2-a2*c1;


    if((w==0) && (wx==0) && (wy==0))
    {
        printf("Uklad jest nieoznaczony");
    }
    if ((w==0) &&(wx!=0) &&(wy!=0))
    {
        printf("Uklad jest sprzeczny");
    }
    if (w!=0)
    {
        x=(wx/w);
        y=(wy/w);
        printf("Uklad jest oznaczony x=%i",x);
        printf("y=%i",y);
    }


#endif
