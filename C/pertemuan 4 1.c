#include <stdio.h>
#define MAX 5

void isiArray(int arr[]);
void showArray(int arr[]);
int jumlahAllElemen(int arr[]);
int cariNilaiTerkecil(int arr[]);
int cariIndexNilai(int arr[]);

int main()
{
    int array[MAX], sum, terbesar, pilihan, cari;
    do
    {
        system("cls");
        puts("Menu Hitung Persegi");
        puts("1. Isi Array");
        puts("2. Tampilkan Isi Array");
        puts("3. Tampilkan Hasil Penjumlahan Semua Elemen");
        puts("4. Tampilkan Nilai Terkecil");
        puts("5. Cari Nilai");
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
            terbesar = cariNilaiTerkecil(array);
            printf("Tampilkan Nilai Terkecil: %d", terbesar);
            getch();
            break;
        case 5:
        	cari = cariIndexNilai(array);
        	
        	if (cari == -1) {
        		puts("Nilai tidak ditemukan!");
			} else {
				printf("Nilai ditemukan dan berada di indeks: %d", cari);
			}
            	
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
    
    getch();
    return 0;
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

int jumlahAllElemen(int arr[])
{
    int i, total = 0;
    for (i = 0; i < MAX; i++)
    {
        total = total + arr[i];
    }
    return total;
}

int cariNilaiTerkecil(int arr[])
{
    int i, bil_kecil = arr[0];
    for (i = 0; i < MAX; i++)
    {
        if (arr[i] < bil_kecil)
        {
            bil_kecil = arr[i];
        }
    }
    return bil_kecil;
}

int cariIndexNilai(int arr[])
{
	int i, index=-1, cari;
	
	printf("Input nilai yang dicari: ", i);scanf("%d", &cari);
	
	for (i = 0; i < MAX; i++)
    {
        if (cari == arr[i]) {
        	index = i;
		}
    }
    return index;
}
