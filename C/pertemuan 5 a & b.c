#include <stdio.h>
#include <string.h>
#define MAX 3

typedef char string[255];

typedef struct
{
    int tahun;
    string merk;
    float tangki;
} Mobil;

void init(Mobil m[]);
void entryData(Mobil m[]);
void show(Mobil m[]);
void bubbleSortByTahun(Mobil m[]);


int main()
{
    int pilihan;
    Mobil m[3];
    do
    {
        system("cls");
        puts("Menu Hitung Persegi");
        puts("1. Inisialisasi Data");
        puts("2. Masukkan Data Mobil");
        puts("3. Tampilkan Data Mobil");
        puts("4. Urutkan Data Mobil Dari Terbesar Ke Terkecil");
        puts("0. Exit");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            init(m);
            getch();
            break;
        case 2:
            entryData(m);
            getch();
            break;
        case 3:
            show(m);
            getch();
            break;
        case 4:
            bubbleSortByTahun(m);
            getch();
            break;
        case 0:
            break;
        default:
            printf("Maaf menu tidak ditemukan!");
            getch();
            break;
        }
    } while (pilihan != 0);
}
void init(Mobil m[])
{
    int i;
    
    for (i = 0; i < MAX; i++)
    {
        m[i].tahun = 0;
        strcpy(m[i].merk, "-");
        m[i].tangki = 0;
    }
}
void entryData(Mobil m[])
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("Data Mobil Ke-%d\n", i + 1);
        printf("Input Tahun: ");
        scanf("%d", &m[i].tahun);
        fflush(stdin);
        printf("Input Merk: ");
        gets(m[i].merk);
        printf("Input Ukuran Tangki: ");
        scanf("%f", &m[i].tangki);
    }
}
void show(Mobil m[])
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("\nData Mobil Ke-%d", i + 1);
        printf("\nTahun: %d", m[i].tahun);
        printf("\nMerk: %s", m[i].merk);
        printf("\nUkuran Tangki: %.2f", m[i].tangki);
    }
}
void bubbleSortByTahun(Mobil m[])
{
    int i, j;
    Mobil temp;

    for (i = 0; i < MAX - 1; i++)
    {
        for (j = 0; j < MAX - 1 - i; j++)
        {
            if (m[j].tahun < m[j + 1].tahun)
            {
                temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }
}
