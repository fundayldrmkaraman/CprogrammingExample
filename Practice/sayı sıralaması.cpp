#include <stdio.h>
#define N 10
int main()
{
	int dizi[N]={23,7,8,1,5,9,4,92,56,32};
	int i,j,enk_ind;
	for(i=0;i<N-1;i++)
	{
		enk_ind=i;
		for(j=i+1;j<N;j++)
		{
		    if(dizi[enk_ind]>dizi[j])
		    {
		    	enk_ind=j;
			}
		}
		int temp=dizi[enk_ind];
		dizi[enk_ind]=dizi[i];
		dizi[i]=temp;
	}
	for(i=0;i<N;i++)
	{
		printf("%d\n",dizi[i]);
	}
	return 0;
}
