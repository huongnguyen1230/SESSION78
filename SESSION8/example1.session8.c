#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float sales_amt, com;
	printf ("enter the sales amount:\n");
	scanf ("%f", &sales_amt);
	
	com=sales_amt*0.1;
	if (sales_amt >=10000)
	printf ("commission=%f\n", com);
	
	return 0;
}
