#include <stdio.h>

main() {
	int A[11], i;
	int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
	int j=0;
        
    //Menampilkan array
    printf("Isi array A: \n");
    for  (i=0; i<15; i++) {
    	printf("%i ", data[i]);
	}
	
	//Array setelah perulangan
	printf("\n\nArray B: \n");
	for (i=0; i<11; i++) {
		if (data[i]==999) {
			break;
		}
		if (data[i]>=9)
			A[j] = data[i];
			j++;
	}
	
	for (i=0; i<j; i++) {
		printf("%i ", A[i]);
	}
	
	return 0;
}
