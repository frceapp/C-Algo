#include <stdio.h>
#define MAX 3

void isiMatrix(int mat[MAX][MAX]);
void showMatriks(int mat[MAX][MAX]);
void subtracMatriks(int mat_a[MAX][MAX], int mat_b[MAX][MAX], int mat_c[MAX][MAX], int total[MAX][MAX]);
void transposeMatriks(int arr[MAX][MAX]);

void main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], mat_total[MAX][MAX], pilihan, pilihan_matriks;
    do
    {
        system("cls");
        puts("Menu Hitung Persegi");
        puts("1. Isi Matriks A");
        puts("2. Isi Matriks B");
        puts("3. Isi Matriks C");
        puts("4. Tampilkan Isi Matriks A");
        puts("5. Tampilkan Isi Matriks B");
        puts("6. Tampilkan Isi Matriks c");
        puts("7. Pengurangan Matriks");
        puts("8. Transpose Matriks");
        puts("0. Exit");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            isiMatrix(a);
            getch();
            break;
        case 2:
            isiMatrix(b);
            getch();
            break;
        case 3:
        	isiMatrix(c);
            getch();
            break;
        case 4:
            showMatriks(a);
            getch();
            break;
        case 5:
            showMatriks(b);
            getch();
            break;
        case 6:
            showMatriks(c);
            getch();
            break;
        case 7:
            subtracMatriks(a, b, c, mat_total);
            showMatriks(mat_total);
            getch();
            break;
        case 8:
        	puts("1. Matriks A");
        	puts("2. Matriks B");
        	puts("3. Matriks C");
        	printf("Pilih Matriks: ");
        	scanf("%d", &pilihan_matriks);
        
        	switch (pilihan_matriks) {
        		case 1:
        			transposeMatriks(a);
        			break;
        		case 2:
        			transposeMatriks(b);
        			break;
        		case 3:
        			transposeMatriks(c);
        			break;
        		default:
        			puts("Matriks tidak ditemukan");
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
}

void isiMatrix(int mat[MAX][MAX])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
			printf("Input Elemen Baris %d Kolom %d: ",i,j);scanf("%d",&mat[i][j]);
        }
    }
}

void showMatriks(int mat[MAX][MAX])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void subtracMatriks(int mat_a[MAX][MAX], int mat_b[MAX][MAX], int mat_c[MAX][MAX], int total[MAX][MAX])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            total[i][j] = mat_a[i][j] - mat_b[i][j] -  mat_c[i][j];
        }
    }
}

void transposeMatriks(int arr[MAX][MAX])
{
	int i, j, transpose[MAX][MAX];
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    
    showMatriks(transpose);
}

