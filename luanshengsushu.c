#include<stdio.h>
#include<math.h>
int isPrime(int x);
int main()
{
	int m;
	while(~scanf("%d",&m))
	{
		int n;
			for( n=m; n>5; n--)
			{
				if(isPrime(n) && isPrime(n-2))
				{
					printf("%d %d\n",n-2,n);
					break;
				}
			}
	}
	return 0;
}
int isPrime(int x)
{
    int j;
    for (j=2; j<=sqrt(x); j++)
	{
        if(x%j==0)
        {
        	return 0;
        	break;
		}
    }
    	if(j>=sqrt(x))
			return 1;
}
