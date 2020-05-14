#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
	printf ("nhap gia tri num:\n");
	scanf ("%d %d", &num1, &num2);
		
	if (num1==num2)
	printf ("numbers are equal");
	else if (num1>num2)
	printf ("the larger number is:%d\n", num1);
	if (num1<num2)
	printf ("the larger number is:%d\n", num2);
	
	return 0;
}
