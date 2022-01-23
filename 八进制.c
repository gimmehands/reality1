# include <stdio.h>

int main()
{
	int n,x,cnt = 1;
	scanf("%d",&x);
	while(scanf("%d",&n)!=EOF)
	{
		printf("%o\n",n);
		cnt++;
		if(cnt>x)
		break;
	}
	return 0;
}
