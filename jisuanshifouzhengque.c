# include<stdio.h>
# include<string.h>
int trans(char *x,int y);
int main()
{
	char p[10],q[10],r[10];
	int n,i;
	long p_trans,q_trans,r_trans;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s %s %s",&p,&q,&r);
		for(i=2;i<=16;i++)
		{
			p_trans=trans(p,i);
			q_trans=trans(q,i);
			r_trans=trans(r,i);
			if(p_trans==-1||q_trans==-1||r_trans==-1)
				continue;
			if(p_trans*q_trans==r_trans)		//�жϽ��н���ת��������Ƿ�����p*q==r������������ϵ���Сֵ 
			{
				printf("%d\n",i);
				break;
			}
		}
		if(i>=17)
			printf("0\n");
	}
	
	return 0;
}
int trans(char *x,int y)
{
	int i,t=0;
	int len=strlen(x);
	for(i=0;i<len;i++)
	{
		if(x[i]-'0'>=y)				//ȷ�����н���ת���Ľ��ƴ�����Ҫת������������һλ�� 
			return -1;
		t*=y;						//���н���ת���������������֤������� 
		t+=x[i]-'0';
	}
	return (long)t;
}
