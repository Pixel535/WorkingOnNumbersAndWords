#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[500];
    char on[500];
    char *pn, *pon;

    printf("podaj wyraz: ");
    scanf("%s", &n);
    pn=&n;
    pon=&on;
    strcpy(pon,pn);
    strrev(pon);
    printf("Podany Wyraz: %s\n", pn);
    printf("Odwrocony wyraz: %s", pon);
    return 0;
}
