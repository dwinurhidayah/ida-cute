#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void cetak();
void urut();

main()
{	
	int data[9] = {3,9,11,12,15,17,23,31,35};
	int i, j, jumlahdata, cari, posisi;

	printf("\n\nMasukkan angka yang dicari : "); 
	scanf("%d", &cari);
    
	posisi = BinarySearch(data, 0, jumlahdata-1, cari);
    
    if(posisi < 0)
	{
      	printf("\n%d tidak ada pada inde", cari);
    }
	
	else 
	{
      	printf("\n%d ada pada index %d", cari, posisi+1);
    }
    getch();
    return 0;
}

void cetak(int i, int data[])
{
    for(i=0; i<8; i++)
	{
        printf("%d, ", data[i]);
    }
}

void urutkan(int i, int j, int data[])
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

int BinarySearch(int data[], int x, int y, int z)
{
    int nilaitengah = (x+y)/2;
    
	if(x>y)
	{
      return -1;
    } 
    
	else if(data[nilaitengah] == z)
	{
      return nilaitengah;
    }
    
	else if(data[nilaitengah] < z)
	{
      return BinarySearch(data, nilaitengah+1, x, z);
    } 
    
	else 
	{
      return BinarySearch(data, x, nilaitengah-1, z);
    }
}
