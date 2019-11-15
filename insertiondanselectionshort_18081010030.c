#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	printf("====Selection Sort=====\n");
	int angka[10]={10,85,77,2,3,6,7,8,9,2};
	int i,j,temp,angka_terkecil;
	for(i=0; i<10; i++){
		angka_terkecil=i;
		for(j=i; j<10; j++){
			if(angka[j] < angka[angka_terkecil]){
				angka_terkecil=j;
			}
		}
					
			temp=angka[i];
			angka[i]=angka[angka_terkecil];
			angka[angka_terkecil]=temp;
	}
			for(i=0; i<10; i++){
			printf("%d ", angka[i]);
}
	
	printf("\n\n\n====Insertion Sort====\n");
	int angka1[10]={6,6,2,5,8,1,7,3,4,1};
	int x,y,temp1;
	for(x=0; x<10; x++){
		for(y=x; y>00 && angka1[y] < angka1[y-1]; y--){
			temp1=angka1[y-1];
			angka1[y-1]=angka1[y];
			angka1[y]=temp1;
			}
		}
			for(x=0; x<10; x++){
			printf(" %d ",angka1[x]);
	}
	return 0;
}


