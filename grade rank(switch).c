# include<stdio.h>
int main()
{
	int N;
	while(~scanf("%d",&N))
	{
		if(N>=0&&N<=100){
		switch(N/10)
		{
			case 10:
			case 9:printf("优\n");break;
			case 8:printf("良\n");break;
			case 7:printf("中\n");break;
			case 6:printf("及格\n");break;
			default:printf("不及格\n");break; 
		}
		}
		if(N==-1)
		break;
	}
	return 0;
}
