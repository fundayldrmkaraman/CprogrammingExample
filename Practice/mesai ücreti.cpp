#include <stdio.h>
int main()
{
	int mesai;
	printf("lutfen mesai saatini giriniz");
	scanf("%d",&mesai);
	if (mesai<=10)
	{ 
	    printf("mesai ucreti:%d",mesai*5);
	}
	else if(mesai>10 && mesai<=20)
	{
		printf("mesai ucreti:%d",10*5+(mesai-10)*3);
	}
	else 
	{
		printf("mesai ucreti:%d",10*5+10*3+(mesai-20)*2);
	}
}
