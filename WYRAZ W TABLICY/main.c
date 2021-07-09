#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  napis1[50];
    char  napis2[]= "\0";
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Podaj wyraz: ");
    scanf("%s", napis1);

    printf("Napis to: ");

    while(*(napis1+j))
    {
        printf("%c", *(napis1+j));
        j++;
    }

    while(*(napis1+i))
    {
        *(napis2+i) = *(napis1+i);
        i++;
    }

    printf("\n");
    printf("Napis po przepisaniu to: ");

    while(*(napis1+k))
    {
        printf("%c", *(napis2+k));
        k++;
    }

    return 0;
}
