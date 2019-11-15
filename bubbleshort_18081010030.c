#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int data[]={1,31,22,30,23,4,18,6,5,3};
int i,j;

void Ascending(){
	for(i=0; i<10-1; i++){
		for(j=0; j<10-1; j++){
			if(data[j+1]<data[j]){
				int temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
}

void Descending(){
	for(i=0; i<10-1; i++){
		for(j=0; j<10-1; j++){
			if(data[j+1]>data[j]){
				int temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
}

int main(){
	int i,j;
	printf("Sebelum Sorting : \n");
	for(i=0; i<10; i++){
		printf("%d ", data[i]);
	}
	Ascending();
	printf("\n\nSetelah Sorting Ascending : \n");
	for(i=0; i<10; i++){
		printf("%d ", data[i]);
	}
	Descending();
	printf("\n\nSetelah Sorting Descending : \n");
	for(i=0; i<10; i++){
		printf("%d ", data[i]);
	}
	getchar();
	return 0;
}
