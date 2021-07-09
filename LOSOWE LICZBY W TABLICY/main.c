#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int losuj(int min, int max)
{
	return (rand()%(max-min+1)+min);
}

int main()
{
    srand(time(0));
    int max, min;
    int *wmax, *wmin;
    wmax = &max;
    wmin = &min;

    printf("Podaj minimum zbioru: ");
    scanf("%d", &min);

    printf("Podaj maximuim zbioru: ");
    scanf("%d", &max);


    int tab[10];
    int *ptab = tab;

    for(int i = 0; i<10; i++)
    {
        *(tab+i) = losuj(*wmin, *wmax);
    }
    for(int i = 0; i<10; i++)
    {
        printf("%d ", *(tab+i));
    }
}
