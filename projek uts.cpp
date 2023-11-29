#include <stdio.h>

// hitung nilai tengah
int hitungNilaiTengah(int ketebalan) {
	return ketebalan / 2;
}

// simulasi pengelasan
void prosesPengelasan(int ketebalan, int waktu) {
    printf("Melakukan pengelasan untuk ketebalan %d mm selama %d detik.\n", ketebalan, waktu);
}

int main() {
    int ketebalan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49, 50};
    int jmlKetebalan = sizeof(ketebalan) / sizeof(ketebalan[0]);

    printf("Tombol Start ditekan. Motor listrik utama berputar 180 derajat.\n");

    for (int i = 0; i < jmlKetebalan; i++) {
        int nilaiTengah = hitungNilaiTengah(ketebalan[i]);
	
		printf("masukan ketebalan pengelasan secara manual pada array dan hitung nilai tengahnya: ");
		scanf("%d",&nilaiTengah);
		
        printf("Motor listrik utama berputar menuju nilai tengah %d.\n", nilaiTengah);

        // lengan tungkai berputar 45 derajat
        printf("Motor listrik lengan tungkai berputar 45 derajat.\n");

        // jari robot mendekati objek
        printf("Motor listrik jari robot mendekati objek.\n");

        
        prosesPengelasan(ketebalan[i], i + 2);

        // Secara otomatis kembali ke langkah 3 untuk ketebalan berikutnya
    }

    return 0;
}
