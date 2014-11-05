#include "stdio.h"

int main() {
	char ad[5];int i;
	for ( i = 0; i < 5; ++i)
	{
		printf("%d.Kişinin Adı:",i+1);
		scanf("%s",&ad[i]);
	}
	printf("ilk girdiğiniz isim:%c\n", ad[0]);
	printf("üçüncü girdiğiniz isim:%c\n", ad[2]);
	printf("Son girdiğiniz isim:%c\n", ad[4]);

	return 0;
}
