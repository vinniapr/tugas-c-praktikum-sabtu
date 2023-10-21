#include <stdio.h>

int main()
{
	int celcius;
	float fahrenheit, reamur;
	
	printf("Masukkan suhu dalam celcius : ");
	scanf("%if", &celcius);
	
    float farenheit = (celcius * 9 / 5) + 32;
	reamur = celcius * 4 / 5;
	
	printf("FARENHEIT dan REAMUR");
	printf("\nFarenheit = %.2f", farenheit);
	printf("\nReamur = %.2f", reamur);
	
	return 0;
}
