#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,num;
	printf ("nhap gia tri:\n", a,b);
	scanf ("%d %d", &a,&b);

    num = a*b;
	
	if (num==1000)
	printf ("tich ab bang 1000");
	else (num>1000);
	printf ("tich ab lon hon 1000");
	return 0;
}
