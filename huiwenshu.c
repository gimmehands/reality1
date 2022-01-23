# include<stdio.h>
int main()
{
	int N,n;
	int sum = 0;
	while(~scanf("%d",&N))
	{
		for(n=N;n>0;n/=10)
		{
			sum = sum*10+n%10;
		}
		if( sum==N )
		printf("Yes\n");
		else
		printf("No\n");
		sum = 0;
	}
	return 0;
}
