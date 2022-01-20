# include<stdio.h>
# include<math.h>
# include<stdlib.h>

int judge(int x);
int main()
{
	int n;
	int i,j,k;
	int t1,t2;
	scanf("%d",&n);
		if(n%2==1||n<4)
		{
			printf("Êý¾ÝÊäÈë´íÎó\n");
			exit(0);
		}
		i = 1;
		while(i<n)
		{
			i++;
			j = n-i;
			if( judge(i)&&judge(j))
			{
				printf("%d=%d+%d\n",n,i,j);
				break;
			}
			else
			{
				continue;
			}
		}
	return 0;
}
int judge(int x)
{
	int y = 2;
	while (x % y != 0)
	{
		y++;
	}
	if (y == x)
		return 1;
	else
		return 0;
}

