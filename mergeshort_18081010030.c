#include <stdio.h>

#define max 10

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

void merge(int bawah, int tengah, int atas) 
	{
		int l1, l2, i;
	
	for(l1 = bawah, l2 = tengah + 1, i = bawah; l1 <= tengah && l2 <= atas; i++) 
		{
      		if(a[l1] <= a[l2])
        	b[i] = a[l1++];
    else
         	b[i] = a[l2++];
  		}
   
   while(l1 <= tengah)    
      		b[i++] = a[l1++];

   while(l2 <= atas)   
      		b[i++] = a[l2++];

   for(i = bawah; i <= atas; i++)
      		a[i] = b[i];
}

void sort(int bawah, int atas) 
	{
   		int tengah;
   
   if(bawah < atas) 
   {
		    tengah = (bawah + atas) / 2;
		    sort(bawah, tengah);
		    sort(tengah+1, atas);
		    merge(bawah, tengah, atas);
   } 
   else 
   { 
      	return;
   }   
   }

int main() 
	{ 
		int i;
		printf("List Sebelum Sorting\n");
		
		for(i = 0; i <= max; i++)
      		printf("%d ", a[i]);
			sort(0, max);
			printf("\nList Sesudah Sorting\n");
   
   		for(i = 0; i <= max; i++)
      		printf("%d ", a[i]);
}
