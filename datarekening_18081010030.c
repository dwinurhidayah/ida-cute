#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct rekening
{
	float saldo;
	char nama[20] ,bank[5], kota[10], alamat[20], provinsi[20], norek[20];
	struct{
		int tgl;
		int bln;
		int thn;
	}umur;	
};

typedef struct rekening rek;

int main ()
{
	rek data[10];
	strcpy (data[0].nama,"Amelia");
	strcpy (data[0].bank,"BRI");
	data[0].umur.bln = 03;
	data[0].umur.thn = 2000;
	data[0].umur.tgl = 28;
	strcpy (data[0].kota,"Magetan");
	strcpy (data[0].provinsi,"Jawa Timur");
	strcpy (data[0].alamat,"Legok");
	strcpy (data[0].norek,"12345");
	data[0].saldo = 50000;
		
	strcpy (data[1].nama,"Zuhair");
	strcpy (data[1].bank,"BNI");
	data[1].umur.bln = 12;
	data[1].umur.thn = 2000;
	data[1].umur.tgl = 17;
	strcpy (data[1].kota,"Kediri");
	strcpy (data[1].provinsi,"Jawa Timur");
	strcpy (data[1].alamat,"Sukomoro");
	strcpy (data[1].norek,"11234");
	data[1].saldo = 35000000;

	strcpy (data[2].nama,"Meike");
	strcpy (data[2].bank,"Mandiri");
	data[2].umur.bln = 05;
	data[2].umur.thn = 2000;
	data[2].umur.tgl = 25;
	strcpy (data[2].kota,"Jombang");
	strcpy (data[2].provinsi,"Jawa Timur");
	strcpy (data[2].alamat,"Kabuh");
	strcpy (data[2].norek,"12234");
	data[2].saldo = 150000;
	
	strcpy (data[3].nama,"Handi Pakek E");
	strcpy (data[3].bank,"Mandiri");
	data[3].umur.bln = 9;
	data[3].umur.thn = 2000;
	data[3].umur.tgl = 12;
	strcpy (data[3].kota,"Surabaya");
	strcpy (data[3].provinsi,"Jawa Timur");
	strcpy (data[3].alamat,"Simorejo");
	strcpy (data[3].norek,"12334");
	data[3].saldo = 200000000;	
		
	strcpy (data[4].nama,"Yunuzz");
	strcpy (data[4].bank,"BNI");
	data[4].umur.bln = 10;
	data[4].umur.thn = 1995;
	data[4].umur.tgl = 11;
	strcpy (data[4].kota,"Jombang");
	strcpy (data[4].provinsi,"Jawa Timur");
	strcpy (data[4].alamat,"Jombangan");
	strcpy (data[4].norek,"12344");
	data[4].saldo = 100000000;
	
	int x, pilih, cari;
	
	while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih !=5 || pilih!=6 || pilih!=7)
	{
		printf("\t\t\t\t=======================================\n");
		printf("\t\t\t\t=   SELAMAT DATANG DI BANK BANG       =\n");
		printf("\t\t\t\t=======================================\n\n\n");
		printf("*Masukkan Menu Pilihan Dengan Menggunakan Angka*\n\n");
		printf("1. Tampilkan Semua Data  \n");
		printf("2. Pencarian Data Berdasarkan Nama Nasabah \n");
		printf("3. Akumulasi Saldo Nasabah \n");
		printf("4. Pencarian Nasabah Berdasarkan Kota \n");
		printf("5. Tampilkan Nasabah dengan Umur Tertentu \n");
		printf("6. Tampilkan Nasabah dengan Saldo Terbesar dan Terkecil \n");
		printf("7. Exit\n\n");
		printf("Silahkan Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		
		
		if(pilih == 1)	
		{
			printf("Data seluruh nasabah : \n\n");
			for(x = 0; x<5; x++)
			{
				printf("Nama			: %s\n",data[x].nama);
				printf("Bank			: %s\n",data[x].bank);
				printf("Tanggal Lahir		: %d\n",data[x].umur.tgl);
				printf("Bulan Lahir		: %d\n",data[x].umur.bln);
				printf("Tahun Lahir		: %d\n",data[x].umur.thn);
				printf("Kota			: %s\n",data[x].kota);
				printf("Provinsi		: %s\n",data[x].provinsi);	
				printf("Jalan			: %s\n",data[x].alamat);
				printf("Nomer Rekening		: %s\n",data[x].norek);
				printf("Saldo Nasabah		: %.2f\n\n",data[x].saldo);
			}
		}
		
		
		if(pilih ==2)
		{
			char namanas[20],salah=0;
			printf("Masukkan Nama Nasabah Yang Ingin Anda Cari : ");
			scanf("%s", &namanas);
			for(x = 0; x<5; x++)
			{
				if(!strcmp(data[x].nama,namanas))
				{
					printf("Nama			: %s\n",data[x].nama);
					printf("Bank			: %s\n",data[x].bank);
					printf("Tanggal Lahir		: %d\n",data[x].umur.tgl);
					printf("Bulan Lahir		: %d\n",data[x].umur.bln);
					printf("Tahun Lahir		: %d\n",data[x].umur.thn);
					printf("Kota			: %s\n",data[x].kota);
					printf("Provinsi		: %s\n",data[x].provinsi);	
					printf("Jalan			: %s\n",data[x].alamat);
					printf("Nomer rekening		: %s\n",data[x].norek);
					printf("Saldo nasabah		: %.2f\n\n",data[x].saldo);	
					break;
				}
			}
		}
		
		if(pilih == 3)
		{
			printf("\nAkumulasi Saldo Seluruh Nasabah\n\n");
			float hasil=0;
			
			for(x=0; x<5; x++)
				{
				hasil+=data[x].saldo;
				printf("%.2f\n",data[x].saldo);			
				}
			printf("--------------------------+\n");
			printf("%.2f\n\n",hasil);
			
		}
		
		if(pilih == 4)
		{
			char kot[10],salah=0;
			printf("Masukan Kota Anda = ");
			scanf("%s",&kot);
			for(x=0; x<5; x++)
				{
				if(!strcmp(data[x].kota,kot))
					{
						printf("Nama			: %s\n",data[x].nama);
						printf("Bank			: %s\n",data[x].bank);
						printf("Tanggal Lahir		: %d\n",data[x].umur.tgl);
						printf("Bulan Lahir		: %d\n",data[x].umur.bln);
						printf("Tahun Lahir		: %d\n",data[x].umur.thn);
						printf("Kota			: %s\n",data[x].kota);
						printf("Provinsi		: %s\n",data[x].provinsi);	
						printf("Jalan			: %s\n",data[x].alamat);
						printf("Nomer Rekening		: %s\n",data[x].norek);
						printf("Saldo Nasabah		: %.2f\n\n\n\n\n",data[x].saldo);
						salah=1;
						break;
					}
				}
				if(salah == 0)
				{
				printf("Maaf Kota Tidak di Temukan \n\n\n");
				}
		}
		
		if(pilih == 5)
		{
			int umur,tahun,salah=0;
			printf("-------CARI NASABAH DENGAN UMUR--------\n\n\n");
			printf("Masukan Umur Nasabah = ");
			scanf("%d",&umur);
			for(x=0; x<5; x++)
				{
				tahun=2019-umur;
				if(tahun==data[x].umur.thn)
						{
						printf("Nama			: %s\n",data[x].nama);
						printf("Bank			: %s\n",data[x].bank);
						printf("Tanggal Lahir		: %d\n",data[x].umur.tgl);
						printf("Bulan Lahir		: %d\n",data[x].umur.bln);
						printf("Tahun Lahir		: %d\n",data[x].umur.thn);
						printf("Kota			: %s\n",data[x].kota);
						printf("Provinsi		: %s\n",data[x].provinsi);	
						printf("Jalan			: %s\n",data[x].alamat);
						printf("Nomer Rekening		: %s\n",data[x].norek);
						printf("Saldo Nasabah		: %.2f\n\n\n\n\n",data[x].saldo);
						salah=1;
						break;
						}
				}
			if(salah == 0)
				{
				printf("Umur Nasabah Tidak Ditemukan\n\n\n");
				
				}
		}
	
	if(pilih == 6)
	{
			printf("\n=========Nasabah Saldo Terbesar Dan Terkecil=========\n\n\n");
			float min=0,max=0;
			for(x=0; x<5; x++)
				{
					if(data[x].saldo<min||min==0)
					{
						min = data[x].saldo;
					}
					if (data[x].saldo>max||max==0)
					{
						max = data[x].saldo;
					}
				
				}
				printf("Saldo Terbesar = %.2f \n",max);
				printf("saldo terkecil = %.2f\n\n\n",min);	
		
	}
	
	if(pilih == 7)
	{
		exit(0);
	}
	
	}
}

