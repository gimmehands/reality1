# include<stdio.h>
int main()
{
	int i,j,n=0;
	char d[10001];
	while((d[n]=getchar())!='\n')
	{
		n++;
	}
	for(i=0;i<=n;i++)
	{
			if(d[i]!='*')
		{
			for(j=0;j<i;j++)
			{
				printf("%c",d[j]);
			}
			for(j=i;j<=n;j++)
			{
				if(d[j]!='*')
				printf("%c",d[j]);
			}
			break; 
		}
	}
	return 0;
}
