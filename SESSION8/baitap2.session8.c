#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char kytu;
	printf ("nhap ky tu:\n");
	scanf ("%c", &kytu);
	
	switch (kytu){
		case 'A':
		case 'a':
			printf ("Ada");
			break;
		case 'B':
		case 'b':
			printf ("Basic");
			break;
		case 'C':
		case 'c':
			printf ("COBOL");
			break;
		case 'D':
		case'd':
			printf ("dBASE III");
			break;
		case 'V':
		case 'v':
			printf ("Visual C++");
			break;
	default :
			printf ("kieu ky tu khong nam trong danh sach liet ke");
			break;
			
			
			
	}
	return 0;
}
