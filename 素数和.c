# include <stdio.h>

int isPrime( int i)
{
	int ret = 1;
	int k;
for ( k=2; k<i-1; k++)
	{
	if( i%k == 0)
		{
		ret = 0;
		break;
		}
	}
	return ret;
}
int main()
{	int x;
	int sum = 0;
	int i;
	while(scanf("%d",&x)!=EOF)
	{
	if( x==1)
	{
		x =2; 
	}
	for ( i=2; i<x; i++)
	{
		if(isPrime(i))
		{
			sum+=i;
		}
	}
	printf("%d\n",sum);
	sum = 0;
	}
	return 0;
}
