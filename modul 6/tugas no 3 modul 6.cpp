#include <stdio.h>

int main()
{
	int i;
	int angka = 1;
	
	for (i = 0; i < 11; i++) {
		printf("%d ", angka);
		angka *=2;
	}
	
	return 0;
}
