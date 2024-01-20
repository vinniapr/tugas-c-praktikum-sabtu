#include <stdio.h>
#include <unistd.h>

// fungsi untuk menghitung nilai tengah
int hitungNilaiTengah(int ketebalan) {
	printf("Masukkan ketebalan pengelasan secara manual pada array dan hitung nilai tengahnya: ");
    scanf("%d", &ketebalan);
    return ketebalan / 2;
}

// fungsi untuk simulasi pengelasan
void prosesPengelasan(int ketebalan, int waktu) {
    printf("Melakukan pengelasan untuk ketebalan %d mm selama %d detik.\n", ketebalan, waktu);
}

// fungsi untuk tombol Start
void tombolStart() {
    printf("Tombol Start ditekan. Motor listrik utama berputar 180 derajat.\n");
}

// fungsi untuk proses utama
void prosesUtama(int ketebalan[], int jmlKetebalan) {
    for (int i = 0; i < jmlKetebalan; i++) {
        int nilaiTengah = hitungNilaiTengah(ketebalan[i]);

        printf("Motor listrik utama berputar menuju nilai tengah %d.\n", nilaiTengah);
        sleep(1);
        printf("Motor listrik lengan tungkai berputar 45 derajat.\n");
        sleep(1);
        printf("Motor listrik jari robot mendekati objek.\n");
        sleep(1);

        prosesPengelasan(ketebalan[i], i + 2);
        sleep(1);
    }
}

int main() {
    int ketebalan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49, 50};
    int waktu[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int jmlKetebalan = sizeof(ketebalan) / sizeof(ketebalan[0]);

    tombolStart();
    prosesUtama(ketebalan, jmlKetebalan);

    return 0;
}
