# include<stdio.h>
# include<stdlib.h>
int main()
{
	int a,b;
	int m,n;
	while(~scanf("%d %d",&a,&b))
	{
		m = gcd(a,b);
		n = lcm(a,b);
		printf("%d\n%d\n",m,n);
	}
	return 0;
}
int gcd( int A,int B)
{
	int t;
	if(A < B)
	{
        t = A;
        A = B;
        B = t;
    }
    while(A%B != 0)
	{
        t = A%B;
        A = B;
        B = t;
    }
    return B;
}
int lcm( int A,int B)
{
	int i,t;
	if(A < B)
	{
        t = A;
        A = B;
        B = t;
    }
    if( A%B == 0)
    {
    	return A;
	}
	else
	{
		int i;
		for( i=A; i>0; i++)
		{
			if( i%B==0 && i%A==0)
			{
				return i;
			}
		}
	}
}
