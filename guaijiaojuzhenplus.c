#include<stdio.h>
int main()
{
	int i,j,x,a[20][20];
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			if(i==j)
			a[i][j]=i+1;
			if(i>j)
			a[i][j]=j+1;
			if(i<j)
			a[i][j]=i+1;
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
