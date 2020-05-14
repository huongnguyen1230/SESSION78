#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,hieu;
	printf ("nhap gia tri:\n", a,b);
	scanf ("%d %d", &a,&b);
	
	hieu=a-b;
	
	if (hieu ==a || hieu ==b)
	printf ("hieu bang gia tri\n", hieu);
	else
	printf ("hieu khong bang gia tri nao da nhap\n", hieu);
	
	return 0;
}
