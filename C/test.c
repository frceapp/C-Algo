#include <stdio.h>
#define MAX 10

void isiArray(int arr[]);
void showArray(int arr[]);
int jumlahAllElemen(int arr[]);
int cariNilaiTerbesar(int arr[]);

void main()
{
    int array[MAX], sum, terbesar, pilihan;
    do
    {
        system("cls");
        puts("Menu Hitung Persegi");
        puts("1. Isi Array");
        puts("2. Tampilkan Isi Array");
        puts("3. Tampilkan Hasil Penjumlahan Semua Elemen");
        puts("4. Tampilkan Nilai Terbesar");
        puts("0. Exit");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            isiArray(array);
            getch();
            break;
        case 2:
            showArray(array);
            getch();
            break;
        case 3:
            sum = jumlahAllElemen(array);
            printf("Total Semua Elemen: %d", sum);
            getch();
            break;
        case 4:
            terbesar = cariNilaiTerbesar(array);
            printf("Bilangan Terbesar: %d", terbesar);
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

void showArray(int arr[])
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void isiArray(int arr[])
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("Masukkan Nilai Indeks ke %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int jumlahAllElemen(int arr[]) 16
{
    int i, total = 0;
    for (i = 0; i < MAX; i++)
    {
        total = total + arr[i];
    }
    return total;
}

int cariNilaiTerbesar(int arr[])
{
    int i, bil_besar = arr[0];
    for (i = 0; i < MAX; i++)
    {
        if (arr[i] > bil_besar)
        {
            bil_besar = arr[i];
        }
    }
    return bil_besar;
}