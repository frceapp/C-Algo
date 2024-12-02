#include <stdio.h>

int  main()
{
	int i, a, first, last, counter, jumlah_bilangan_prima=0, bil;
	printf("Input Bilangan: ");scanf("%d",&bil);

    printf("Bilangan prima 0-%d:\n", bil);

	for (a = 0; a <= bil; a++) {
        counter = 0;

        for(i=0;i<=a;i++){
            if(i!=0){
                if(a%i==0){
                    counter++;
                }
            }
        }

        if (counter == 2) {
            jumlah_bilangan_prima++;

            if (jumlah_bilangan_prima == 1) {
                first = a;
            }

            last = a;

            printf("%d ", a);
        }
    }

    printf("\nBilangan prima terkecil: %d\n", first);
    printf("Bilangan prima terbesar: %d\n", last);
    return 0;

    
}
