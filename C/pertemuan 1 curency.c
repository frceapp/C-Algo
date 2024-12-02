# include <stdio.h>

int main() {
	float rupiah, usd, yen, sgd, pound;
	printf("Masukan nominal rupiah: ");scanf("%f", &rupiah);
	
	usd = rupiah * 0.000066;
	yen = rupiah * 0.0094;
	sgd = rupiah * 0.000085;
	pound = rupiah * 0.000094;
	
	printf("%.2f USD\n", usd);
	printf("%.2f Yen\n", yen);
	printf("%.2f SGD\n", sgd);
	printf("%.2f British Pound", pound);
}
