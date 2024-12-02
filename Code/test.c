#include <stdio.h>
#include <math.h>

void hitung_volume_tabung(float jari_jari,  float tinggi) {
    float volume;
    volume = 3.14 * pow(jari_jari, 2) * tinggi;
    printf("Volume Tabung adalah %.2f", volume);
}

int  main()
{
    int type;
    float jari_jari, tinggi, rusuk;
    printf("Input: ");scanf("%d", &type);

    switch (type) {
        case 1:
            printf("Masukkan Jari-Jari alas Tabung: ");scanf("%f", &jari_jari);
            printf("Masukkan Tinggi Tabung: ");scanf("%f", &tinggi);

            hitung_volume_tabung(jari_jari, tinggi);
            break;
        
        default:
            printf("Opsi tidak ditemukan");
            break;
    }
    
    return 0;
}