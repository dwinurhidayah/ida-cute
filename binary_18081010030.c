#include <stdio.h> 
int main()
{
	int data[9]={3,9,11,12,15,17,23,31,35};
	int cari, flag=0, awal, tengah, akhir;
	awal=0;
	akhir=9;
	printf("\n\nMasukkan angka yang dicari :");
	scanf("%d", &cari);
	while (awal<=akhir && flag ==0)
	{
		tengah=(awal+akhir)/2;
		if(data[tengah]==cari)
		{
			flag=1;
			break;
		}
		else if(data[tengah]<cari)
		{
			awal=tengah+1;
			printf("Kanan-");
		}
		else
		{
			akhir=tengah-1;
			printf("Kiri-");
		}
	}
	if(flag=1)
	printf("\n%d ada pada index %d", cari, tengah+1);
	else
	printf("\n%d tidak ada pada index", cari);
}
