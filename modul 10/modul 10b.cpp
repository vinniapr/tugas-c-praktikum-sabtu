#include <cstdio>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12] = {0};  

    printf("Isi Array A: ");
    for (int I = 0; I < 5; I++) {
        printf("%d ", A[I]);
    }
  
    printf("\nIsi Array B: ");
    for (int I = 0; I < 7; I++) {
        printf("%d ", B[I]);
    }

    int J = 0; 

    for (int I = 0; I < 5; I++) {
        if (A[I] > 10) {
            C[J] = A[I];
            J++;
        }
    }

    for (int i = 0; i < 4; i++) {
        C[J] = 0;
        J++;
    }

    for (int I = 6; I >= 0; I--) {
        if (B[I] > 10) {  
            C[J] = B[I];
            J++;
        }
    }
    
	printf("\n_______________________________");	
    printf("\nIsi Array C: ");
    for (int I = 0; I < J; I++) {
        printf("%d ", C[I]);
    }

    return 0;
}
