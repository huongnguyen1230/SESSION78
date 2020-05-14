#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf ("nhap gia tri:\n", a,b);
	scanf ("%d", &a);
	scanf ("%d", &b);
	
	if (a%b==0)
	printf ("a chia het cho b\n");
	else (a%b!=0);
	printf (" a khong chia het cho b\n");
	
	
	
	return 0;
}
