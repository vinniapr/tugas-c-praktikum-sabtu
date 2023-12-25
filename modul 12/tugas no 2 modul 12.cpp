#include <stdio.h>

int main() {
    char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T','A', '\0'};

    printf("Isi Array A: ");
    for (int i = 0; i < 11 - 1; i++) {
        printf("%c ", A[i]);
    }

    int count[26] = {0};
    for (int i = 0; i < 11 - 1; i++) {
        count[A[i] - 'A']++;
    }

    char hurufTerbanyak = 'A';
    int jumlahTerbanyak = count[0];

    for (int i = 1; i < 26; i++) {
        if (count[i] > jumlahTerbanyak) {
            hurufTerbanyak = (char)('A' + i);
            jumlahTerbanyak = count[i];
        }
    }

    printf("\nHuruf terbanyak: %c\n", hurufTerbanyak);
    printf("Jumlah huruf terbanyak: %d\n", jumlahTerbanyak);

    return 0;
}

