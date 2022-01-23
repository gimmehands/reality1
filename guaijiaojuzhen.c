#include<stdio.h>

int main()
{
int i,j,k,n;
while(scanf("%d",&n)!=EOF)
{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		k = i;
		if(k>=j)
		printf("%d ",j);
		else
		printf("%d ",k);
		}
    	printf("\n");
	}	
}
return 0;
}
