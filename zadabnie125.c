#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int objetosc_prostopadl(int a, int b, int H)
{
    int V;
    V = a * b * H;

    return V;
}

int objetosc_ostroslup(int a, int H)
{
    int V;
    V = (a * a * H) / 3;

    return V;
}

int main(void)
{
    int a, b, H, V, figura;

    printf("Objetosc jakiej figury chcesz policzyc?\nJezeli prostopadloscian, to wpisz '1'; a jesli ostoslup prawidlowy czworokatny, to wpisz '2': ");
    scanf ("%d", &figura);

    if (figura == 1) {

    printf("Podaj kolejno w wierszach ponizej dlugosc podstawy, szerokosc podstawy oraz wysokosc figury: \n");
    scanf("%d %d %d", &a, &b, &H);

    if (a <= 0 || b <= 0 || H <= 0){
        printf("Podano zle wartosci!!");

        } else {

    V = objetosc_prostopadl(a, b, H);
    printf("Objetosc prostopadloscianu wynosi: %d \n", V);
    printf("\n");
        }
    }

    else if (figura == 2){

        printf("Podaj kolejno w wierszach poniżej dlugosc krawedzi podstawy oraz wysokosc figury: \n");
        scanf("%d %d", &a, &H);

         if (a <= 0 || H <= 0){
        printf("Podano zle wartosci!!");

    } else {

    V = objetosc_ostroslup(a, H);
    printf("Objetosc ostroslupa wynosi: %d \n", V);
    printf("\n");
            }
    }
    else {
        printf("Wpisano niewlasciwe dane!\n");
    }
return 0;
    }