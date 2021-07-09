#include <stdio.h>
#include <stdlib.h>

int losuj()
{
	return (rand());
}

int main()
{
    srand(time(0));
    int max, min;
    int *wmax, *wmin;
    wmax = &max;
    wmin = &min;


    int tab[10];
    int *ptab = tab;


    for(int i = 0; i<10; i++)
    {
        *(tab+i) = losuj();
    }

    *wmin = *ptab;

    for(int i = 0; i<10; i++)
    {
        printf("%d ", *(tab+i));
    }

    for(int j = 0; j<10; j++)
    {
        if(*(tab+j) > *wmax)
        {
            *wmax = *(tab+j);
        }
        if(*(tab+j) < *wmin)
        {
            *wmin = *(tab+j);
        }
    }

    printf("\nmax: %d\n", max);
    printf("min: %d\n", min);

    return 0;
}
