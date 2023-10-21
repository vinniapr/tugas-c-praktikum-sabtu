#include <stdio.h>

int main()
{
	int alas, tinggi, Sm;
	int luas, keliling;
	
	printf("Input alas segitiga (cm) : ");
	scanf("%i", &alas);
	printf("Input tinggi segitiga (cm) : ");
	scanf("%i", &tinggi);
	printf("Input Sm segitiga (cm) : ");
	scanf("%i", &Sm);
	
	luas = 0.5 * alas * tinggi;
	keliling = alas + tinggi + Sm;
	
	printf("LUAS dan KELILING LINGKARAN");
	printf("\nAlas = %i", alas);
	printf("\nTinggi = %i", tinggi);
	printf("\nSm = %i", Sm);
	printf("\nLuas = %i", luas);
	printf("\nKeliling = %i", keliling);
	
	return 0;	
}
