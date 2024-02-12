#include <stdio.h>
#include <stdlib.h>
#include "derets.h"

int main()
{
    int jumlah, jenis, ulang;
    while(1)
    {
        printf("Banyaknya angka pada deret = ");
        scanf("%d", &jumlah);
        printf("Jenis deret (Ketik 1 untuk ganjil, ketik 2 untuk genap) = ");
        scanf("%d", &jenis);
        if (jenis == 1)
        {
            ganjil(jumlah);
        }
        else if (jenis == 2)
        {
            genap(jumlah);
        }

        printf("\nKetik 1 untuk mengulang program = ");
        scanf("%d", &ulang);
        if(ulang != 1)
        {
            break;
        }
        printf("====================================\n");
    }
    return 0;
}