#include <stdio.h>
#include <stdlib.h>

struct osoba
{
    char imie[50];
    char nazwisko[50];
    long long int pesel;
    char zainteresowania[256];
};



int main()
{
    struct osoba *wsk;
    wsk = (struct osoba*) malloc(sizeof(struct osoba ));

    printf("Podaj zainteresowania: ");
    fgets((*wsk).zainteresowania, 256, stdin);

    printf("Podaj imie: ");
    scanf("%s", (*wsk).imie);

    printf("Podaj nazwisko: ");
    scanf("%s", (*wsk).nazwisko);

    printf("Podaj pesel: ");
    scanf("%lld", &(*wsk).pesel);


    printf("\n\n%p  Zainteresowania: %s", (*wsk).zainteresowania, (*wsk).zainteresowania);
    printf("%p  Imie: %s\n", (*wsk).imie, (*wsk).imie);
    printf("%p  Nazwisko: %s\n", (*wsk).nazwisko, (*wsk).nazwisko);
    printf("%p  Pesel: %lld\n", (*wsk).pesel, (*wsk).pesel);

    return 0;
}
