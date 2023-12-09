#include <stdio.h>

main() {
	int A[11], j, i;
	int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; 
	
	printf("Isi data: \n");
	for (i=0; i<=11; i++) {
		printf("%d ", data[i]);
	}

	printf("\nMasukkan Data yang Bernilai Genap: \n");
	for (i=0; i<=11; i++) {
		if (data[i]%2==0) {
			A[j]= data[i];
			j++;
		}
	}
	for (i=0; i<j; i++) {
		printf("%d ", A[i]);
	}
	return 0;
}
