#include <stdio.h>

float zScore(float x, float u, float o);
int cekUsual(float zscore);

int main()
{
    int jumlah_angka;
    int usual = 0, unusual = 0, very_unusual = 0;
    float rata_rata, angka, standar_deviasi, zscore;
    printf("Jumlah angka = ");
    scanf("%d", &jumlah_angka);
    printf("Rata-rata = ");
    scanf("%f", &rata_rata);
    printf("Standar deviasi = ");
    scanf("%f", &standar_deviasi);

    int i;
    for(i=0; i<jumlah_angka; i++)
    {
        printf("\nMasukkan angka = ");
        scanf("%f", &angka);
        zscore = zScore(angka, rata_rata, standar_deviasi);
        printf("z-score = %.2f\n", zscore);
        //cekUsual(zscore);
        if (cekUsual(zscore) == 1)
        {
            usual = usual + 1;
        }
        else if(cekUsual(zscore) == 2)
        {
            unusual = unusual + 1;
        }
        else 
        {
            very_unusual = very_unusual + 1;
        }
    }
    printf("\nRekapitulasi per kategori: \n");
    printf("usual = %d\n", usual);
    printf("unusual = %d\n", unusual);
    printf("very unusual = %d", very_unusual);
}

float zScore(float x, float u, float o)
{
    float z;
    z = (x-u)/o;
    return z;
}

int cekUsual(float zscore)
{
    if(zscore>=-2 && zscore<=2)
    {
        return 1;
    }
    else if((zscore>=-3 && zscore<-2) || (zscore>2 && zscore<=3))
    {
        return 2;
    }
    else if(zscore<-3 || zscore>3)
    {
        return 3;
    }
    return 0;
}