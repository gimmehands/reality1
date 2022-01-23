# include<stdio.h>

void sum( int begin,int end)
{
	int i,sum = 0;
	for( i=begin; i<=end; i++)
	{
		sum+=i;
	}
	printf("%d到%d间的数和为：%d\n",begin,end,sum);
}
int main()
{
	sum(1,10);
	sum(20,30);
	sum(35,40);
	
	return 0;
}
