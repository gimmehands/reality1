# include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	float fact = 1.0; 
	float i = 1.0;
	float e ;
	
	for( i=1; i<=n; i++){
		fact *= i;
		e += 1.0/fact;
	} 
	
	printf("%lf\n",e+1);
}
