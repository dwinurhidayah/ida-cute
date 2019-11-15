#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void shorting(int i, int j, int data[])
{
	int x, nilai;
    for (i = 0; i < 8 - 1; i++)
	{
    	for (j = 8 - 1; j > i; j--)
		{
        	if (data[i] > data[j])
			{
          	int temp = data[j];
          	data[j] = data[i];
          	data[i] = temp;
        	}
    	}
	}
    
    x=8;
    for(i=0;i<x;i++)
	{	
		nilai = data[i];
        printf("%d, ", nilai);
    }
        printf("\n");
}


main()
{
	int i, j, jumlahdata, kunci, low, high, posisi;
	int data[8] = {12, 33, 60, 13, 29, 47, 22, 21};
	
    printf("\n\nData Setelah di Shorting\n");
    shorting(i,j,data);
    
    jumlahdata = sizeof(data)/sizeof(data[0]);
	printf("\n\nJumlah data : %d", jumlahdata);
    
    printf("\n\nMasukkan Data Kunci Yang Sedang di Cari = ");
    scanf("%d", &kunci);
    
    low = 0;
    high = jumlahdata-1;
    
	posisi = ((kunci - data[low]) * ((high-low) + low))/ (data[high] - data[low]) ; 
	
	for(low = 0; low<=high ; low++)
	{
		if(data[posisi] == kunci)
		{
			printf("Data di temukan di array dan berada pada index %d", posisi+1);
			break;
		}
		else if(data[posisi] < kunci)
		{
			posisi = posisi + 1;
		}
	}
		
	if (low > high)
	printf("Tidak di temukan data %d pada array\n", kunci);
	return 0;  

}


