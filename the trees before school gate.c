#include<stdio.h>
int main()
{
	
	int a,b,c,d,sum=0,i,j;
	char tree[100001];
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		sum=0;
		for(i=0;i<=a;i++)
			tree[i]=1;
	 i=1;
	while(i<=b)
	{
		scanf("%d %d",&c,&d); 	
	 		for(j=c;j<=d;j++)
				tree[j]=0;
	 			i++;
	}
	for(i=0;i<=a;i++)
		if(tree[i]==1)
		sum++;
	printf("%d\n",sum);	    	
	}
	return 0;
}
