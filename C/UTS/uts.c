#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

typedef char string[255];

void daftarNasabah(string *nama, string *alamat, int *ktp, int *pin);
void initSetorTarik(int arr[]);
void displayNasabah(string nama, string alamat, int ktp, int saldo);
void displaySetorTarik(int setor[], int tarik[]);
bool checkPIN(bool *blokir, int pin);
int setorUang(int pin, bool *blokir, int saldo, int setor[]);
int tarikUang(int pin, bool *blokir, int saldo, int tarik[]);

int main() {
	int pilihan, PIN, ktp, saldo = 0;
	string nama[255], alamat[255];
	
	do {
		system("cls");
		
		puts("Menu Bank \n1. Daftar Nasabah \n2. Setor Uang \n3. Tarik Uang \n4. Lihat Data Nasabah & Saldo \n5. Lihat Riwayat Setor & Penarikan \n0. Exit");
		printf("Pilih menu: ");scanf("%d", &pilihan);
		
		switch (pilihan) {
			case 1:
				daftarNasabah(nama, alamat, ktp, PIN);
				getch();
				break;
			case 4:
				displayNasabah(nama, alamat, ktp, saldo);
				getch();
				break;
		}
	} while (pilihan != 0);
	
	getch();
	return 0;
}

void daftarNasabah(string *nama, string *alamat, int *ktp, int *pin) {
	puts("Data Nasabah Baru");
	printf("Nama: ");scanf("%s", &nama);
	printf("Alamat: ");scanf("%s", &alamat);
	printf("Nomor KTP: ");scanf("%d", &ktp);
	
	printf("PIN: ");scanf("%d", &pin);
	
	puts("Data nasabah baru berhasil disimpan!");
}

void displayNasabah(string nama, string alamat, int ktp, int saldo) {
	printf("Nama: %s \nAlamat: %s \nKTP: %d \nSaldo: %d", nama, alamat, ktp, saldo);
}

