# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("我已经想好一个1到100之间的数");
	do {
		printf("请猜这个1到100之间的数；");
		scanf("%d",&a);
		count ++;
		if (a > number){
			printf("您猜的数大了"); 
		}	else if (a < number){
			printf("您猜的数小了"); 
		}	 
	}	while (a != number);
		printf("输入了%d次就正确了\n",count);
}
