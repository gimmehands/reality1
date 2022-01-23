# include<stdio.h>
# include<math.h>
int isPrime(int m);
int main()
{	
	int i,x,cnt=0;
	for ( i=101; i<=200; i++)
	{
		x=isPrime(i);
	if(x==1)
		cnt+=1;
	if(x==0)
		cnt = cnt;
	}
	printf("101~200间素数的个数为 %d\n",cnt);
	return 0;
}
int isPrime(int m)
{
    int j;
    for (j=2; j<=sqrt(m); j++)
	{
        if(m%j==0)
        {
        	return 0;
        	break;
		}
    }
    	if(j>=sqrt(m))
			return 1;
}
