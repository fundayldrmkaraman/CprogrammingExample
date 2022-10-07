#include <stdio.h>
int main()
{
	int maas,isyili;
	printf("maasinizi giriniz");
	scanf("%d",&maas);
	printf("isyilinizi giriniz");
	scanf("%d",&isyili);
	
	if(maas>2500)
	{
		if(isyili>2)
		{
			printf("kredi alabilirsiniz");
		}
		else 
		{
			printf("kredi alamazsiniz");
		}
	}
	else
	{
		printf("Kredi alamazsiniz");
	}
	return 0;
}
