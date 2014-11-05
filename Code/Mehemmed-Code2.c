/**/
#include "stdio.h"

int main() {
	int sayi,i;
	int kare[8][2]={{1,1}, {2,4}, {3,9},{4,16},{5,25},{6,36},{7,49},{8,64},{9,81}};
	printf("1 ile 10 arasında bir sayi giriniz: ");
	scanf("%d",&sayi);
	for (i = 0; i < 8; i++)
	{
			if (kare[i][0] == sayi)
	{
		/* code */
		printf("%d\n", kare[i][1]);
	}
	}
	

	return 0;
}
