#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//#include "kalkulator.h"

/*double wyznacznik(double k, double l, double m, double n){
    return k * n - l * m;
}

void wyswietl_informacje();

void wczytaj_wspolczynniki(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2);
*/
//#include "conio.h"

//void wczytaj_parametry(int *c, int *a, int *b);

//void odpowiedzi(float delta, float x1, float x2);

//void wyznacznik_moj();

/*int pierwiastek (double x)
{
    double wynik;
    wynik = sqrt(x);

    return wynik;
}
*/
int main() {

    /*char znak;//"%c"
    int wartosc_calkowita;// "%i"
    double wartosc_wymierna;// "%lf"


    printf("Podaj znak: ");
    scanf("%c", &znak);
    printf("znak:", znak );
    printf("Podaj wartosc: ");
    scanf("%i", &wartosc_calkowita);
    //znak=getchar();
    //scanf("%c", &znak);
    //putchar(znak);
*/

    /*int a = 3;
    int b = 4;
    int c;
    a++;

    printf("%i\n", a);

    c= a++ + b;

    printf("%i\n", c);

    printf("%i\n", a);
*/


    /*
    double c=0.0000001;
    double d=0.000000000000001;
    double eps=0.001;



    printf("%i", (c-d)*(c-d) < eps);
*/

    /*
    int rok;
    bool przestepny;

    printf("Podaj rok ");
    scanf("%i", &rok);

    przestepny = !(rok % 4) && rok % 100 || !(rok %400);

    printf("%i", przestepny);
*/

    /*
    int a=7;
    int b=3;
    int max;

    max = a>b?a:b;

    printf("maksimum: %i", max);
    */

    /*
    int a;
    int b;
    int c;
    float delta;
    float x,x1,x2;

    wczytaj_parametry(&c, &a, &b, &delta);
    delta= (*b) * (*b) - (4 * (*a) * (*c));
    x1=(-b+sqrtf(delta)/(2*a));
    x2=(-b-sqrtf(delta)/(2*a));


    odpowiedzi(delta, x1, x2);


    return 0;

}

void odpowiedzi(float delta, float x1, float x2) {
    if (delta == 0)
    {
        printf("Delta ma jedno rozwiązanie");
    }
    if(delta>0)
    {
        printf("Delta ma dwa rozwiązania %.2f ",x1); printf("%.2f", x2);
    }
    if(delta<0)
    {
        printf("Delta nie ma rozwiązan");
    }
}

void wczytaj_parametry(int *c, int *a, int *b) {
    printf("Podaj a:");
    scanf("%i\n", a);
    printf("Podaj b:");
    scanf("%i\n", b);
    printf("Podaj c:");
    scanf("%i\n", c);
    */




    /*wyznacznik_moj();
     */



    /*
    char ch;
    printf("\nWpisz jakis znak\n");
    scanf("%c", &ch);
    printf("Kod znaku %c to %d.\n",ch,ch);

    getchar();
    */

    /*
    double a1, b1, c1, a2, b2, c2;
    double W, Wx, Wy;
    double x, y;
    wyswietl_informacje();
    wczytaj_wspolczynniki(&a1, &b1, &c1, &a2, &b2, &c2);


    printf("Twój układ równań:\n");
    printf("%5.2lf=x + %5.2lf+y = %5.2lf \n", a1, b1, c1);
    printf("%5.2lf=x + %5.2lf+y = %5.2lf \n", a2, b2, c2);
    printf("\n");

    W = wyznacznik(a1, a2, b1, b2);
    Wx = wyznacznik(c1, c2, b1, b2);
    Wy = wyznacznik(a1, a2, c1, c2);

    printf("Wyznacznik W = %lf\n", W);
    printf("Wyznacznik Wx = %lf\n", Wx);
    printf("Wyznacznik Wy = %lf\n", Wy);
    printf("\n");

    if (W != 0) {
        x = Wx / W;
        y = Wy / W;
        printf("Rozwiązanie:\n");
        printf("x = %5.2lf, y = %5.2lf", x, y);
        printf("\n");
    } else {
        if (Wx != 0.0 || Wy != 0.0) {
            printf("Układ równań sprzeczny - nie ma rozwiązania.");
        } else {
            printf("Układ równań nieoznaczony - nieskończenie wiele rozwiązań.");
        }
    }

*/




        double a,b,wynik;
        char wybor;


        printf("KALKULATOR.\n");
        printf("wprowadz pierwsza liczbe:\n");
        scanf("%lf",&a);
        printf("wprowadz druga liczbe:\n");
        scanf("%lf", &b);


        printf("wybhierz dzialanie:\n+ Dodawanie\n- Odejmowanie\n* Mnozenie\n\ Dzielenie\n");
        scanf("%s", &wybor);


        switch(wybor)
        {
            case '+':
                wynik = a+b;

                printf("wynik dzialania to %lf\n", wynik);
                break;
            case '-':
                wynik = a-b;

                printf("wynik dzialania to %lf\n", wynik);
                break;
            case '*':
                wynik = a*b;
                {
                    printf("wynik dzialania to %lf\n", wynik);
                }

                break;
            case '/':
                wynik = a/b;
                if(b ==0){
                    printf("Nie dziel przez 0");
                }
                if(b!=0) {
                    printf("wynik dzialania to %lf\n", wynik);
                }
                break;


        }


        return 0;
    }


/*
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

*/