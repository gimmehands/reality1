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
			case 9:printf("��\n");break;
			case 8:printf("��\n");break;
			case 7:printf("��\n");break;
			case 6:printf("����\n");break;
			default:printf("������\n");break; 
		}
		}
		if(N==-1)
		break;
	}
	return 0;
}
