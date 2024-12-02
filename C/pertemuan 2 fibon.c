# include <stdio.h>

int main() {
	int a, b, max, next;
	printf("Masukan maksimal angka: ");scanf("%d", &max);
	
	a = 0;
	b = 1;
	
	while (b <= max) {
		printf("%d ", b);
		
		next = a + b;
		a = b;
		b = next;
	}
}
