#include <stdio.h>
 int main () {
 	double saldo = 1000000;
 	double bunga = 0.02;
 	int bulan = 10;
 	int i;
 	
 	for (i = 1; i<=bulan; i++) {
 		saldo +=saldo*bunga;
	 }
	 
	 printf("jumlah uang setelah %d bulan:Rp. %.2f", bulan, saldo);
	 
	 return 0;
 }
