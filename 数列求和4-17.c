#include<stdio.h>
int func(int i);
int main()
{
	int n; 
	while(~scanf("%d",&n))
	{
		int i,j;
		double s=0.0,k=1;
		for(i=1;i<=n;i++)
		{
			s+=k/func(i);
			k*=-1;
		}
		printf("%.6lf\n",s);
	}
	return 0;
}
int func(int i)
{
	double sum=0.0;
	int j=i;
	while(j--)
	{
		sum+=i;
		i*=10;
	}
	return sum;
}
