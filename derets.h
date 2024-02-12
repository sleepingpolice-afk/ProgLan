#include <stdio.h>

void ganjil(int jumlah)
{
    int angka = 1;
    printf("Deret = ");
    int i;
    for (i = 0; i<jumlah; i++)
    {
        if (i == jumlah-1)
        {
            printf("%d", angka);
        }
        else
        {
            printf("%d, ", angka);
        }
        angka += 2;
    }
}

void genap(int jumlah)
{
    int angka = 0;
    printf("Deret = ");
    int i;
    for (i = 0; i<jumlah; i++)
    {
        if (i == jumlah-1)
        {
            printf("%d", angka);
        }
        else
        {
            printf("%d, ", angka);
        }
        angka += 2;
    }
}