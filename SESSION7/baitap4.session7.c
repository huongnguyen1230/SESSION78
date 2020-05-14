#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, trocap;
	printf ("muc luong:\n");
	scanf ("%d", &a);
	char nhanvien;
	printf ("loai nhan vien:\n");
	scanf ("%c", &nhanvien);
	


	switch (nhanvien)
	{
		case 'A':
			printf ("luong cuoi thang cua nhan vien: %d\n", a+300);
			break;
		case 'B':
			printf ("luong cuoi thang cua nhan vien: %d\n",a+250);
			break;
		case 'C':
			printf ("luong cuoi thang cua nhan vien: %d\n", a+100);
			break;
		default:
		printf ("luong cuoi thang cua nhan vien:%d\n", a+300, a+250, a+100);
	}
	
	return 0;
}
