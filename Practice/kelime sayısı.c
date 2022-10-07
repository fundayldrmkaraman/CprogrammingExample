#include <stdio.h>
#include <conio.h>
int main()
{
	char dizgi[100];
	gets(dizgi);
	int i;
	int kelimesayisi=1;
	for(i=0;dizgi[i]!='\0';i++)
	{
		if(dizgi[i]=='')
		{
			kelimesayisi++;
		}
	}
	printf("kelime sayisi=%d",kelimesayisi);
	getch();
}
