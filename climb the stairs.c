# include<stdio.h>
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
			printf("%d\n",ways(n));
	}

}
int ways(int n)
{
    int n1=0,n2=1,result=2; 
    int i;
    if(n<3)
	return n;
    for(i=2;i<n;i++)
    {
        n1=n2;    
        n2=result;
        result=n1+n2;
    }
    return result;
}
