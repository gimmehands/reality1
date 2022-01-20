# include<stdio.h>
int main()
{
	int i,m,n;
	int M = 0;
	scanf("%d",&n);
	for( i=1; i<=n; i++)
	{
		scanf("%d",&m);
		if( m>M)
		M = m;
	}
	printf("%d\n",M);
	return 0;
}
