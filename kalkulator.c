#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//#include "conio.h"

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


    int a;
    int b;
    int c;
    float delta;
    float x,x1,x2;

    printf("Podaj a:");
    scanf("%i\n", &a);
    printf("Podaj b:");
    scanf("%i\n", &b);
    printf("Podaj c:");
    scanf("%i\n", &c);
    delta=b*b-(4*a*c);

   x1=(-b+sqrtf(delta)/(2*a));
    x2=(-b-sqrtf(delta)/(2*a));



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


    return 0;

}