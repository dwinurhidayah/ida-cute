#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct data_mahasiswa
	{
	int npm;
	float ipk;
	};
	
typedef struct data_mahasiswa mhs;

int main(){
	int i, pilih, cari, lanjut;
	while (pilih != 1 || pilih != 2 || pilih != 3){
	mhs data[3];
	data[0].npm = 21;
	data[0].ipk = 2.67;

	data[1].npm = 22;
	data[1].ipk = 3.85;
	
	data[2].npm = 23;
	data[2].ipk = 4.00;

		printf("\t==========Data Mahasiswa==========\n");
		printf("\tPilih menggunakan angka\n");
		printf("\t\t1. Tampilkan data (a-z) \n\t\t2. Tampilkan data (z-a) \n\t\t3. Cari data\n");
		printf("\tMasukkan Pilihan Anda : ");
		scanf("%d", &pilih);
		
		
		if(pilih == 1)
			{
			printf("Data Mahasiswa : \n\n");
			for(i = 0; i<3; i++)
				{
				printf("Npm : %d\n", data[i].npm);
				printf("ipk : %f\n\n", data[i].ipk);
				}
			} 
		
		
		else if (pilih == 2)
			{
			printf("Data Mahasiswa : \n\n");
			for(i = 2 ; i>=0; i--)
				{
				printf("Npm : %d\n", data[i].npm);
				printf("ipk : %f\n\n", data[i].ipk);	
				}	
		
			} 
			
			
		else if (pilih == 3)
			{
			printf("Masukkan npm yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<3; i++)
				{
				if(data[i].npm == cari)
					{
					printf("Npm : %d\n", data[i].npm);
					printf("ipk : %f\n\n", data[i].ipk);
					break;
					}
				}		
			} 
		
		
		else 
			{
			printf("Inputan anda salah\n");
			}
	}
	return 0;
}

