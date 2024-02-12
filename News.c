#include <stdio.h>

int main()
{
    int lama_parkir, total;

    printf("Lama parkir: ");
    scanf("%d", &lama_parkir);

    total = 3000 + (lama_parkir*1000);

    if(lama_parkir>24)
    {
        total = total - 10000;
    }

    printf("Totalnya adalah: %d", total);
}