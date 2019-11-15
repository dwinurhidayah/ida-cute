#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct penyimpanan
{
	char kontainer[30];
	char ukuran[30];
	char berat[30];
	char vendor[20];
	char jenis_muatan[15];	
};
typedef struct penyimpanan container;

int main() 
{
	int x;
	container data[3][2][3];
	
	strcpy (data[0][0][0].kontainer, "1");
	strcpy (data[0][0][0].ukuran, "20");
	strcpy (data[0][0][0].berat , "100");
	strcpy (data[0][0][0].vendor,"Meratus");
	strcpy (data[0][0][0].jenis_muatan,"Electronics");
	
	strcpy (data[0][0][1].kontainer, "2");
	strcpy (data[0][0][1].ukuran, "40");
	strcpy (data[0][0][1].berat , "150");
	strcpy (data[0][0][1].vendor,"Mearsk");
	strcpy (data[0][0][1].jenis_muatan,"Electronics");

	strcpy (data[0][0][2].kontainer, "3");
	strcpy (data[0][0][2].ukuran, "20");
	strcpy (data[0][0][2].berat , "100");
	strcpy (data[0][0][2].vendor,"Meratus");
	strcpy (data[0][0][2].jenis_muatan,"Goods");
	
	strcpy (data[0][0][3].kontainer, "4");
	strcpy (data[0][0][3].ukuran, "60");
	strcpy (data[0][0][3].berat , "200");
	strcpy (data[0][0][3].vendor,"Meratus");
	strcpy (data[0][0][3].jenis_muatan,"Goods");

	strcpy (data[0][1][0].kontainer, "5");
	strcpy (data[0][1][0].ukuran, "20");
	strcpy (data[0][1][0].berat , "100");
	strcpy (data[0][1][0].vendor,"Mearsk");
	strcpy (data[0][1][0].jenis_muatan,"Chemical");
	
	strcpy (data[0][1][1].kontainer, "6");
	strcpy (data[0][1][1].ukuran, "60");
	strcpy (data[0][1][1].berat , "200");
	strcpy (data[0][1][1].vendor,"Pelni Logistics");
	strcpy (data[0][1][1].jenis_muatan,"Electronics");
	
	strcpy (data[0][1][2].kontainer, "7");
	strcpy (data[0][1][2].ukuran, "40");
	strcpy (data[0][1][2].berat , "150");
	strcpy (data[0][1][2].vendor,"Mearsk");
	strcpy (data[0][1][2].jenis_muatan,"Chemical");
	
	strcpy (data[0][2][0].kontainer, "8");
	strcpy (data[0][2][0].ukuran, "40");
	strcpy (data[0][2][0].berat , "150");
	strcpy (data[0][2][0].vendor,"Pelni Logistics");
	strcpy (data[0][2][0].jenis_muatan,"Goods");
	
	strcpy (data[0][2][1].kontainer, "9");
	strcpy (data[0][2][1].ukuran, "40");
	strcpy (data[0][2][1].berat , "150");
	strcpy (data[0][2][1].vendor,"Meratus");
	strcpy (data[0][2][1].jenis_muatan,"Elektronics");
	


			printf("=====Blok A=====\n");
			printf("Kontainer	: %s\n",data[0][0][0].kontainer);
			printf("Ukuran		: %s\n",data[0][0][0].ukuran);
			printf("Berat		: %s\n",data[0][0][0].berat);
			printf("Vendor		: %s\n",data[0][0][0].vendor);
			printf("Muatan		: %s\n",data[0][0][0].jenis_muatan);
			printf("\n");
			printf("Kontainer	: %s\n",data[0][0][1].kontainer);
			printf("Ukuran		: %s\n",data[0][0][1].ukuran);
			printf("Berat		: %s\n",data[0][0][1].berat);
			printf("Vendor		: %s\n",data[0][0][1].vendor);
			printf("Muatan		: %s\n",data[0][0][1].jenis_muatan);
			printf("\n");
			printf("Kontainer	: %s\n",data[0][1][1].kontainer);
			printf("Ukuran		: %s\n",data[0][1][1].ukuran);
			printf("Berat		: %s\n",data[0][1][1].berat);
			printf("Vendor		: %s\n",data[0][1][1].vendor);
			printf("Muatan		: %s\n",data[0][1][1].jenis_muatan);
			printf("\n");
			printf("Kontainer	: %s\n",data[0][2][1].kontainer);
			printf("Ukuran		: %s\n",data[0][2][1].ukuran);
			printf("Berat		: %s\n",data[0][2][1].berat);
			printf("Vendor		: %s\n",data[0][2][1].vendor);
			printf("Muatan		: %s\n",data[0][2][1].jenis_muatan);
			printf("\n");
			printf("=====Blok B=====\n");
			printf("Kontainer	: %s\n",data[0][0][2].kontainer);
			printf("Ukuran		: %s\n",data[0][0][2].ukuran);
			printf("Berat		: %s\n",data[0][0][2].berat);
			printf("Vendor		: %s\n",data[0][0][2].vendor);
			printf("Muatan		: %s\n",data[0][0][2].jenis_muatan);
			printf("\n");
			printf("Kontainer	: %s\n",data[0][0][3].kontainer);
			printf("Ukuran		: %s\n",data[0][0][3].ukuran);
			printf("Berat		: %s\n",data[0][0][3].berat);
			printf("Vendor		: %s\n",data[0][0][3].vendor);
			printf("Muatan		: %s\n",data[0][0][3].jenis_muatan);
			printf("\n");
			printf("Kontainer	: %s\n",data[0][2][0].kontainer);
			printf("Ukuran		: %s\n",data[0][2][0].ukuran);
			printf("Berat		: %s\n",data[0][2][0].berat);
			printf("Vendor		: %s\n",data[0][2][0].vendor);
			printf("Muatan		: %s\n",data[0][2][0].jenis_muatan);
			printf("\n");
			printf("=====Blok C=====\n");
			printf("Kontainer	: %s\n",data[0][1][0].kontainer);
			printf("Ukuran		: %s\n",data[0][1][0].ukuran);
			printf("Berat		: %s\n",data[0][1][0].berat);
			printf("Vendor		: %s\n",data[0][1][0].vendor);
			printf("Muatan		: %s\n",data[0][1][0].jenis_muatan);
			printf("\n");
			printf("Kontainer	: %s\n",data[0][1][2].kontainer);
			printf("Ukuran		: %s\n",data[0][1][2].ukuran);
			printf("Berat		: %s\n",data[0][1][2].berat);
			printf("Vendor		: %s\n",data[0][1][2].vendor);
			printf("Muatan		: %s\n",data[0][1][2].jenis_muatan);
				
	return 0;
}
