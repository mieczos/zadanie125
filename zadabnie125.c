#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int objetosc_prostopadl(int a, int b, int H)
{
    int V;
    V = a * b * H;

    return V;
}

int main(void)
{
    int a, b, H, V, figura;

    printf("Podaj kolejno w wierszach ponizej dlugosc podstawy, szerokosc podstawy oraz wysokosc figury: \n");
    scanf("%d %d %d", &a, &b, &H);

    if (a <= 0 || b <= 0 || H <= 0){
        printf("Podano zle wartosci!!");

        } else {

    V = objetosc_prostopadl(a, b, H);
    printf("Objetosc prostopadloscianu wynosi: %d \n", V);
    printf("\n");
        }

return 0;
    }
