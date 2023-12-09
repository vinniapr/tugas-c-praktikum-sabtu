#include <stdio.h>

main() {
 	int n;
	int A[10];
	
	printf("Input Nilai Mahasiswa: \n", n);
	for (n=0; n<10; n++) {
		printf("Nilai Mahasiswa ke-%i: ", (n+1));
		scanf("%i", &A[n]);
	}
	
	printf("\n\nMahasiswa yang lulus: ");
	for (n=0; n<10; n++) {
		if (A[n] >= 60) {
		printf("\nMahasiswa ke-%i: %i", n+1, A[n]);
		}
	}
	return 0;
}
