#include <stdio.h>

int main()
{
	int JMasuk, JKeluar, JLama;
	printf("Menenutkan Lama Bekerja");
	printf("\nJam masuk = ");
	scanf("%i", &JMasuk);
	
	printf("\nJam keluar = ");
	scanf("%i", &JKeluar);
	
	if(JKeluar >= JMasuk) { 
		JLama = JKeluar - JMasuk; 
	} else {
		JLama = (12-JKeluar) + JMasuk;
	}

	printf("\nLama bekerja adalah = %ijam", JLama);
	return 0;
}
