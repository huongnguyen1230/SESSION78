#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int b=1,j=9, k=97;


	
	if (b<k && j<k)
	printf ("k la gia tri lon nhat \n", k);
	if (b<j && k<j)
	printf ("j la gia tri lon nhat\n", j);
	 if (j<b&&k<b)
	printf ("b la gia tri lon nhat\n", b);

	return 0;
}
