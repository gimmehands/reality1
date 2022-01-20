# include<stdio.h>
int main()
{
	int N;
	while(scanf("%d",&N)!=EOF)
	{
	char x,c[10000]={0};
	int cnt=0,n=0;
	while((c[n]=getchar())!='\n')
	{
		n++;
	}
	scanf("%c",&x);
	n=0;
	while(c[n]!='\n')
	{
		if(c[n]==x)
		{
			cnt++;
		}
		n++;
	}
	printf("%d\n",cnt);
	fflush(stdin);
	}
}
