/**/
#include "stdio.h"

int main() {
	int sayi[5],i;
	for ( i = 0; i < 5; ++i)
	{
		printf("%d Sayi Giriniz:",i+1);
		scanf("%d",&sayi[i]);
	}
	printf("ilk girdiğiniz sayı:%d\n", sayi[0]);
	printf("üçüncü girdiğiniz sayı:%d\n", sayi[2]);
	printf("Son girdiğiniz sayı:%d\n", sayi[4]);

	return 0;
}
