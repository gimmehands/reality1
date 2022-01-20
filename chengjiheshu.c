#include <stdio.h>
#include <stdlib.h> 
int fun(int n);
int main() {
	int N;
	scanf("%d",&N);
	int j;
	for(j=1;j<=N;j++){
		fun(j);
	}
	return 0;
}
int fun(int n){
	int i;
	int m = n;
	int sum=0,fac=1;
	do
	{
		i = m%10;
		sum += i;
		fac *= i;
		m /= 10;
	}while( m!=0);
	if(fac==sum)
		{
			printf("%d\n",n);
		}
}
