# include<stdio.h>
int main()
{
	int m=1,n=1;
	int i,k;
	scanf("%d",&k);
	if( k%2==0)
	{
	for( i=1; i<=k/2; i++)
	{
		printf("%12d%12d",m,n);
		m += n;
		n += m;
		if(i%2==0)
		{
			printf("\n");
		}
		if(i==k)
		{
			printf("\n");
		}
	}
	}
	return 0;
}
