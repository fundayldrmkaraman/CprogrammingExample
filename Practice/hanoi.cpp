#include <stdio.h>
void hanoi(int n, char k1, char k2,char k3)
{
	if(n==1)
	{
		printf("%c -> %c\n",k1,k3);
	}
	else
	{
		hanoi(n-1,k1,k3,k2);
		printf("%c -> %c\n",k1,k3);
		hanoi(n-1,k2,k1,k3);
	}
}
int main()
{
	hanoi(4,'A','B','C');
	return 0;
}
