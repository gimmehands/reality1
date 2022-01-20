# include<stdio.h>
int main()
{
	int n=0,i;
	for( i=100; i<=200; i++)
	{
		if( i%3 != 0)
		{
			printf("%6d",i);
			n++;
			if(n%6==0)
			printf("\n");	
		}
	}
	return 0;
}
