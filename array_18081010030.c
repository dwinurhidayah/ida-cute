#include <stdio.h>
#include <conio.h>

/*int main() {
	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3){
		
		int npm[3] = {21,22,23};
		float ipk[3] = {2.67,3.85,4.00};
		
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
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);
				}
			
			} 
			
			
		else if (pilih == 2)
			{
			printf("Data Mahasiswa : \n\n");
			for(i = 3 ; i>=0; i--)
				{
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);	
				}	
		
			} 
		
		
		else if (pilih == 3)
			{
			printf("Masukkan npm yang dicari : ");
			scanf("%d", &cari);
			for(i = 0; i<3; i++)
				{
				if(cari == npm[i])
					{
					printf("Npm : %d\n", npm[i]);
					printf("ipk : %f\n\n", ipk[i]);
					break;
					} 
				}			
			} 
		
		
		else 
			{
			printf("Inputan Salah\n");
			}
	}
	
	return 0;
}*/

int main()
{
	int i, pilih, cari;
	while(pilih != 1 || pilih != 2 || pilih != 3){
		
		int npm[3]={30,31,32};
		float ipk[3]={3.90,3.89,3.88};
		
		printf("Pilih menggunakan angka!");
		printf("1. Tampilan Semua NPM & IPK \n2.Tampilan Urut dari belakang\n3.Cari Data\n");
		printf("Menu yang anda pilih");
		scanf("%d",&pilih);
		
		if(pilih == 1)
		{
			printf("Tampilan Menu NPM & IPK");
			for(i=0 ; i<3;i++)
			{
				printf("NPM = %d\n", npm[i]);
				printf("IPK = %f\n\n",ipk[i]);
			}
		}
		
		if(pilih == 2)
		{
			printf("Tampilan menu dari belakang");
			for(i=3; i>=0;i--)
			{
				printf("NPM = %d\n", npm[i]);
				printf("IPK = %f\n\n",ipk[i]);	
			}
		}
		
		if(pilih == 3)
		{
			printf("Masukkan NPM yang ingin dicari");
			scanf("%d", &cari);
			for(i=0;i<3;i++)
			{
				if(cari == npm[i])
				{
				printf("NPM = %d\n", npm[i]);
				printf("IPK = %f\n\n",ipk[i]);	
				break;	
				}
			}
		}
	}
}
