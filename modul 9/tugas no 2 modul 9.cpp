#include <stdio.h>
main() 
{
	char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'}, n;
	int i, flag;
	
	printf("Masukkan Karakter: ");
	scanf("%c", &n);
	
	//cetak array
	for (i=0; i<10; i++) {
		printf("%c ", A[i]);
	}
	
	// pencarian
	for (i=0; i<=9; i++){
		if (n==A[i]) {
			flag = 1;
		}
	}
	if (flag = 1) {
		printf("\nADA");
	} else {
		printf("\nTIDAK ADA");
	}
	
	//karakter
	printf("\nBanyaknya Karakter: ");
	flag = 0;
	i = 0;
	while (i<=9) {
		if (A[i] == n)
			printf("%i", i);
		i++;
	}
	return 0;
}
