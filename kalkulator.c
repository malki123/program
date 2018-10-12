#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//#include "conio.h"

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


    int rok;
    bool przestepny;

    printf("Podaj rok ");
    scanf("%i", &rok);

    przestepny = !(rok % 4) && rok % 100 || !(rok %400);

    printf("%i", przestepny);

    return 0;
}