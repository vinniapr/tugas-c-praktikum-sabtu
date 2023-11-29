#include <stdio.h>
#include <string.h>

main()
{
	int n;
	printf("\nInput n = ");
	scanf("%d", &n);
	
	if(n > 50) 
	{
		n = n - 25;
	} 
	else 
	{
		n = n + 10;
	}
	printf("\n\n %d", n);
	printf("\nProgram selesai");
	return 0;
}
