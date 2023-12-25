#include <stdio.h>

int main() {
    char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    char input;
    int flag = 0;

	//cetak array
    printf("Isi Array A: ");
    for (int I = 0; I < 8; I++) {
        printf("%c ", A[I]);
    }

    //input huruf 
    printf("\nMasukkan huruf yang akan dicek: ");
    scanf(" %c", &input);
    
	//melakukan pencarian
    for (int i = 0; i < 7; i++) {
        if (A[i] == input) {
            flag = 1;
            printf("ADA\n", input);
            break;
        }
    }

    if (!flag) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
