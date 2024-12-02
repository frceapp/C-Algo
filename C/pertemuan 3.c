#include <stdio.h>
#include <math.h>

void hitung_volume_tabung(float jari_jari,  float tinggi);
void hitung_volume_kerucut(float jari_jari,  float tinggi, float *vol);
float hitung_volume_kubus(float rusuk);

int  main()
{
    int type;
    float jari_jari, tinggi, rusuk, volume;
    printf("Input: ");scanf("%d", &type);

    switch (type) {
        case 1:
            printf("Masukkan Jari-Jari alas Tabung: ");scanf("%f", &jari_jari);
            printf("Masukkan Tinggi Tabung: ");scanf("%f", &tinggi);

            hitung_volume_tabung(jari_jari, tinggi);
            break;
        
        case 2:
            printf("Masukkan Jari-Jari alas Kerucut: ");scanf("%f", &jari_jari);
            printf("Masukkan Tinggi Kerucut: ");scanf("%f", &tinggi);

            hitung_volume_kerucut(jari_jari, tinggi, &volume);
            
            printf("Volume Kerucut adalah %.2f", volume);
            break;
        
        case 3:
        	printf("Masukkan rusuk Kubus: ");scanf("%f", &rusuk);
        	
        	volume = hitung_volume_kubus(rusuk);
        	
        	printf("Volume Kubus adalah %.0f", volume);
            break;
        
        default:
            printf("Opsi tidak ditemukan");
            break;
    }
    
    return 0;
}


void hitung_volume_tabung(float jari_jari,  float tinggi) {
    float vol;
    vol = 3.14 * pow(jari_jari, 2) * tinggi;
    printf("Volume Tabung adalah %.2f", vol);
}

void hitung_volume_kerucut(float jari_jari,  float tinggi, float *vol) {
    (*vol) = (float)1/3 * 3.14 * pow(jari_jari, 2) * tinggi;  
}

float hitung_volume_kubus(float rusuk) {
    float vol;
    vol = pow(rusuk, 3);
    return vol;
}
