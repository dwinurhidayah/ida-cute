#include <stdio.h>
#include <stdlib.h>

/*main()
{
	int x,b,n,hasil;
	printf("\t\t\tProgram Sederhana Faktorial Dengan Rekursif\n\n\n");
	printf("\t\t====================================================\n");
	printf("\t\tMasukkan Bilangan : ");
	scanf("%d", &x);
	printf("\t\tMasukkan Bilangan Pangkat : ");
	scanf("%d", & n);
	printf("\t\tHasil Faktorial Bilangan %d Pangkat %d Adalah %d", x, n, pangkat(x,n));
	printf("\n\n\n");
	printf("\t\t\tProgram Sederhana Faktorial Dengan Iteratif\n\n\n");
	printf("\t\t====================================================\n");
	printf("\t\tMasukkan Bilangan : ");
	scanf("%d", &x);
	printf("\t\tMasukkan Bilangan Pangkat : ");
	scanf("%d", & n);
	
	for(b=1;b<=n;b=b+1)
		{
			hasil=hasil*x;
		}
		printf("\t\tHasil Faktorial Bilangan %d Pangkat %d Adalah %d\n", x, n, hasil);
		
}
int pangkat(int x, int n)
{
	if(n==0)
	return 1;
	else
	{
	return x*pangkat(x,n-1);
	}
}*/

int pangkat(int x, int n){
	if(n == 0)
	return 1;
	else{
		return x*pangkat(x,n-1);
	}
}

int main(){
	int x,n;
	printf("Masukkan BIL : ");
	scanf("%d",&x);
	printf("Masukkan BIL PANGKAT : ");
	scanf("%d",&n);
	printf("Hasil Bil %d pangkat %d adalah %d", x,n,pangkat(x,n));
}

