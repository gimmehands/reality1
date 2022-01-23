# include<stdio.h>
int main()
{
	int i,j,k;
	int x;
	while(~scanf("%d",&x)){
	for( i=1; i<=x/5-1; i++)
	{
		for( j=1; j<=x/3-2; j++)
		{
			for( k=1; k<=x-2; k++)
			{
				if( i+j+k==x&&i*5+j*3+k*0.5==x)
				printf("%d %d %d\n",i,j,k);
			} 
		}
	}
	}
	return 0;
}
