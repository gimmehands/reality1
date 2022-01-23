# include<stdio.h>
int main()
{
	int n,sum;
	int i,j,k=0;
	int a[1000];
	int b[1000];
	scanf("%d",&n);
	for( i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for( j=0; j<n; j++)
	{
		scanf("%d",&b[j]);
	}
	i = 0;
	j = 0;
	while( i<n&&j<n)
	{
		sum = a[i] + b[j] ;
		if(k<n)
		printf("%d ",sum);
		if(k==n)
		printf("%d\n",sum);
		i++;
		j++;
		k++;
	}
	return 0;
}
