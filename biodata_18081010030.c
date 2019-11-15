#include <stdio.h>
#include <stdlib.h>

/* 	Nama: Dwi Nurhidayah
	Kelas: Pemrograman Lanjut A
	NPM: 18081010030
*/

int main ()
{
	char nama[50], jurusan[30], ttl[50], fakultas[30];
	int npm, telp;
	
	awal:
	printf("==================BIODATA===================\n");
	printf("============================================\n");
	printf("==\tNama Lengkap	: ");
	scanf("%s", &nama);
	fflush(stdin);
	printf("==\tNPM		: ");
	scanf("%d", &npm);
	fflush(stdin);
	printf("==\tJurusan		: ");
	scanf("%s", &jurusan);
	fflush(stdin);
	printf("==\tFakultas	: ");
	scanf("%s", &fakultas);
	fflush(stdin);
	printf("==\tTmpt Tgl Lahir	: ");
	scanf("%s", &ttl);
	printf("==\tTelp		: ");
	scanf("%d", &telp);
	printf("\n\n\n");

	printf("===========BIODATA DIRI ANDA===============\n");
	printf(" \tHello %s\n , \tNPM %d\n , \tJurusan %s\n , \tFakultas %s\n , \tTempat Tanggal Lahir %s\n , \tTelp %d\n ", nama,npm,jurusan,fakultas,ttl,telp);


	return 0;
}
