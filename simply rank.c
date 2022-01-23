# include<stdio.h>
int main()
{
	int a[1000]={0};
	int n,m,i,j;
	int t;
		scanf("%d",&n); 
		for( j=0; j<n; j++) 
		{
			scanf("%d",&a[j]);
		}
		for( i=0; i<n-1; i++)
		{
			for( j=0; j<n-i-1; j++)
			{
				if(a[j]>a[j+1])
				{
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;  
				}
			}
		}
		for( j=0; j<n; j++)
			{
			if(j<n-1)
				printf("%d ",a[j]);
			else
				printf("%d\n",a[j]);
			}
	return 0;
}
