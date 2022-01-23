# include<stdio.h>
int main()
{
	int a,b,c;
	int n;
	scanf("%d",&n);
	while(~scanf("%d %d %d",&a,&b,&c))
	{
		n--;
		if( a+b>c&&b+c>a&&a+c>b)
		{
			if(a==b&&b==c&&a==c)
			printf("Regular Triangle\n");
			else if( a==b||b==c||a==c)
			printf("Isosceles Triangle\n");
			else
			printf("Triangle\n");
		}
		else
		printf("Not Triangle\n");
		if(n==0)
		break;
	}
	return 0;
 }
