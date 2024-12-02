# include <stdio.h>
# include <math.h>

int main() {
	float diameter, r, keliling, luas;
	printf("Input diameter lingkaran: ");scanf("%f", &diameter);
	
	r = (diameter / 2);
	
	keliling = 2 * 3.14 * r;
	luas = 3.14 * pow(r, 2);
	
	printf("Luas lingkaran: %.0f\n", round(luas));
	printf("Keliling lingkaran: %.0f", round(keliling));
	
	return 0;
}
