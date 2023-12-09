#include <stdio.h>
int main()
{
	int A[11]={12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
	int i, n, flag;
	
	printf("Masukkan Bilangan Integer: ");
	scanf("%i", &n);
	
	//cetak array
	for (i=0; i<11; i++) {
		printf("%3i", A[i]);
	}
	//lakukan pencarian
	i=0;
	while(i<=10) {
		if(A[i]==n) {
			break;
		}
		i++;
	}
	printf("\n");
	if (i<=10) {
		printf("ADA");
	} else {
		printf("TIDAK ADA");
	}
	
	// mencari lokasi
	printf("\nLokasi Bilangan yang sama: ");
	flag = 0;
	i = 0;
	while (i<=10) {
		if (A[i] == n)
			printf("%i", i);
		i++;
	}
	return 0;
	
}
