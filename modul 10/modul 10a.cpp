#include <stdio.h>
int main ()
{
	int A[5] = {12,8,17,5,15};
	int B[7] = {5,11,7,25,9,12,14};
	int C[12] = {0};
	int i, j;
	
	//cetak isi array A
	printf("isi array A: ");
	for (i=0; i<5; i++) {
		printf("%3i", A[i]);
	}
	//cetak isi array B
	printf("\nIsi array B: ");
	for (i=0; i<7; i++) {
		printf("%3i", B[i]);
	}
	j=0; //index ini untuk array c
	for (i=0; i<5; i++) {
		if (A[i] >10) {
			C[j] = A[i];
			j++;
		}
	}
	for (i=0; i<7; i++) {
		if (B[i] > 10) {
			C[j] = B[i];
			j++;
		}	
	}
	//cetak isi array C
	printf("\nIsi array C: ");
	for (i=0; i<12; i++) {
		printf("%3i", C[i]);
	}
	return 0;
}

