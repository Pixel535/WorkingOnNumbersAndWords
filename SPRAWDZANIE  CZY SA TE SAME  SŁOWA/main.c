#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n1[500];
    char n2[500];
    char *pn1, *pn2;

    printf("podaj wyraz 1: ");
    scanf("%s", &n1);
    printf("podaj wyraz 2: ");
    scanf("%s", &n2);

    pn1=&n1;

    pn2=&n2;


    if (strcmp(pn1, pn2) == 0)
    {
        printf("jest to ten sam wyraz");
    }
    else
    {
        printf("nie jest tym samym wyrazem");
    }


    return 0;
}
