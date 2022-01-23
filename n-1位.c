#include<stdio.h>
long func(long w);
int main()
{
	long w;
	while(~scanf("%ld",&w))
	{
		w = func(w);
		printf("%ld\n",w);
	}
	 return 0;
}
long func(long w)
{
	long c = 0,num,t,i;
	num = w;
	while(num)
	{
		num/=10;
		++c;
	}
	if(c--)
	{
		t = 1;
		for(i=1;i<=c;i++)
		t*=10;
		return (w%t); 
	}
	return 0;
}
