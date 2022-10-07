#include <stdio.h>
int main()
{
	int guncel,hedef,gram,gun=0,x=0;
	printf("guncel kilonuzu giriniz");
	scanf("%d",&guncel);
	printf("hedef kilonuzu giriniz");
	scanf("%d",&hedef);
	printf("gunde verdiginiz grami giriniz");
	scanf("%d",&gram);
	guncel=guncel*1000;
	hedef=hedef*1000;
	
	do{
		guncel-=gram;
		gun++;
		if(gun%7==0)
		{
			if(gram<=10)
			{
				gram=10;
				gram=gram*0.9;
			}
		}
		printf("%d\n",guncel);
	}
	while (guncel>hedef);
	printf("%d gun sonra",gun);
	
}
