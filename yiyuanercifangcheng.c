# include<stdio.h>
# include<math.h>
int main()
{
	double a,b,c;
	double x1,x2,p,q;
	double delta;
	while(~scanf("%lf %lf %lf",&a,&b,&c))
	{
	if( a==0)								//�ж�a�Ƿ�Ϊ�㡣 
	printf("����һԪ���η���\n");
	else
	{
		delta = b*b-4*a*c;					//�����б�ʽ�� 
		if( delta==0)						//��������� 
		{
			x1 = -b/(2*a);
			x2 = x1;
			printf("%.2lf %.2lf\n",x1,x2);	//������� 
		}
		else if( delta>0)
		{
			x1 = -b/(2*a)+sqrt(delta)/(2*a);
			x2 = -b/(2*a)-sqrt(delta)/(2*a);
			printf("%.2lf %.2lf\n",x1,x2);	//�������
		}
		else
		{
			p=-b/(2*a);
			q=sqrt(-delta)/(2*a);
			printf("%.2lf+%.2lfi %.2lf-%.2lfi\n",p,q,p,q);//�������
		}
	}
	}
	return 0;
}
