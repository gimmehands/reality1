# include <stdio.h>
# include <math.h>

int main()
{
	double a,b,c;
	double p,s;
	while(~scanf("%lf %lf %lf",&a,&b,&c))
{
	if( a+b>c&&a+c>b&&b+c>a)
	{
		p = (a+b+c)/2.0;
		s = sqrt((p-a)*(p-b)*(p-c)*p);
		printf("%0.4lf\n",s);
	}
	else
	{
		printf("0\n");
	}
}
	return 0;
}
