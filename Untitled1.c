#include <stdio.h>
#include "Untitled-1.h"

int main()
{
    int p, r, t;
    float hasil;
    printf("Menghitung nilai compound interest\nBy WesleyFO\n");
    printf("Nilai P = ");
    scanf("%d", &p);
    printf("Nilai R = ");
    scanf("%d", &r);
    printf("Nilai T = ");
    scanf("%d", &t);

    hasil = compound_interest(p, r, t);
    printf("Hasilnya adalah %.2f", hasil);
    return 0;
}
