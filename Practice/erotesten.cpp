#include<stdio.h>
main()
{
	
	int erotesten[10][10];
	int i,j;
	int m=1;
	for(i=0;i<=10;i++)
	{
		for(j=0;j<10;j++)
		{
			erotesten[i][j]=m;
			m++;
		}
	}
	printf("Sayilarimizi yerlestirdik......\n\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d ",erotesten[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n1'e asal sayi olmadigi icin  0 isareti koydum.\n\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(erotesten[i][j]==1)  erotesten[i][j]=0;
			printf("%d ",erotesten[i][j]);
		}
		printf("\n");
	}
	printf("\n\n2 haric tum 2'nin katlarinin yerine 0 koydum\n\n");
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(erotesten[i][j]%2==0 && erotesten[i][j]!=2)  erotesten[i][j]=0;
			printf("%d ",erotesten[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n3 haric tum 3'un katlarinin yerine 0 koydum\n\n");
	
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(erotesten[i][j]%3==0 && erotesten[i][j]!=3)  erotesten[i][j]=0;
			printf("%d ",erotesten[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n5 haric tum 5'in katlarinin yerine 0 koydum\n\n");
	
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(erotesten[i][j]%5==0 && erotesten[i][j]!=5)  erotesten[i][j]=0;
			printf("%d ",erotesten[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n7 haric tum 7'nin katlarinin yerine 0 koydum\n\n");
	printf("Geriye kalan sayilar asal sayilardir\n\n");
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(erotesten[i][j]%7==0 && erotesten[i][j]!=7)  erotesten[i][j]=0;
			printf("%d ",erotesten[i][j]);
		}
		printf("\n");
	}
	printf("\n\nAsal sayilarimiz.....\n\n");
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(erotesten[i][j]==0) continue;
			printf("%d ",erotesten[i][j]);
		}
	
	}
	
	

}
