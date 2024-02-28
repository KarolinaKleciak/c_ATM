#include <stdio.h>
#include <stdlib.h>

void wypladz_pieniadze(int suma_pieniedzy, int *tab, int rozmiar)
{
    int ilosc_nominalu, i;

    for(i=0; i< rozmiar; i++)
    {
        ilosc_nominalu = suma_pieniedzy / tab[i];
        printf("Ilosc %d : %d\n", tab[i], ilosc_nominalu);
        suma_pieniedzy = suma_pieniedzy - (ilosc_nominalu * tab[i]);
    }

}

int prawidlowy = 5678;

int zaloguj(int pin)
{
    int czy_zalogowano;

    if(pin == prawidlowy) czy_zalogowano = 1;
    else czy_zalogowano = 0;

    return czy_zalogowano;
}


int main()
{

    int pin, suma_pieniedzy, tab[6] = {500, 200, 100, 50, 20, 10};

    do
    {
        printf("Podaj 4 liczbowy PIN: \n");
        scanf("%d", &pin);

        if(zaloguj(pin))
        {
            printf("Podano prawidlowy pin !\n");

            printf("Podaj kwote do wyplaty: \n");
            scanf("%d", &suma_pieniedzy);

            wypladz_pieniadze(suma_pieniedzy, tab, 6);

        }
        else printf("Podano nieprawidlowy pin !\n");


    }
    while(suma_pieniedzy);
    printf("Koniec programu !");
    return 0;
}
