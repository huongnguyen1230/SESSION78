#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int diem;
	printf ("nhap diem:\n");
	scanf ("%d", &diem);
	char A,B,C,D,E;
	printf ("xep loai:\n");
	scanf ("%c", &A,&B,&C,&E);
	
	if (diem >= 75)
	printf (" xep loai A\n", diem);
	if (diem>=60 && diem< 75)
	printf (" xep loai B\n", diem);
	if (diem>=45 && diem<60)
	printf ("xep loai C\n", diem);
	if (diem >=35 && diem <45)
	printf ("xep loai D\n", diem);
	if (diem<35) 
	printf ("xep loai E\n", diem);
	
	return 0;
}
