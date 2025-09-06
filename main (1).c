#include<stdio.h>
int main()
{
	int i,j,n,even_sum=0,odd_sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%3d  x%3d  = %3d\n",n,i,n*i);
	}
	return 0;
}