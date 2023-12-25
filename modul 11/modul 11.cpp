#include <stdio.h>
int main () 
{
	int A[12] = {60,80,55,90,75,40,50,85,70,65,45,55};
	int B[12] = {0};
	int C[12] = {0};
	int I, J;
	int sum = 0;
	float average;
	
	//mencari rata rata
	J=0;
	for (I=0; I<12; I++) {
		sum += A[I];
	}
	average = sum / 12.0;
	
	//cetak isi Array A
	printf("\nIsi Array A: ");
	for (I=0; I<12; I++) {
		printf("%3i", A[I]);
	}
	
	J=0;
	for (I=0; I<12; I++) {
		if (A[I] >= average) {
			B[J] = A[I];
			J++;
		}
	}
	
	J=0;
	for (I=0; I<12; I++) {
		if (A[I] <= average) {
			C[J] = A[I];
			J++;
		}
	}
	
	//cetak isi Array B
	printf("\nIsi Array B: ");
	for (I=0; I<12; I++) {
		printf("%3i", B[I]);
	}
	
	//cetak isi Array C
	printf("\nIsi Array C: ");
	for (I=0; I<12; I++) {
		printf("%3i", C[I]);
	}
	return 0;
}
