# include<stdio.h>
# include<string.h>
struct guojia
{
	int n;
	char name[101];
	int people;
	char diqu[101];
};
struct guojia country[101];
void rank(int n)
{
	int i,j;
	struct guojia t;
	for(i=0;i<n-1;i++)
	for(j=i;j<n;j++)
	{
		if(strcmp(country[i].name,country[j].name)>0)
		{
			t=country[i];
			country[i]=country[j];
			country[j]=t;
		}
	}
}
int main()
{
	int i,j,n;
	while(scanf("%d",&n)!=EOF){
	for(i=0;i<n;i++)
	{
		scanf("%d %s %d %s",&country[i].n,&country[i].name,&country[i].people,&country[i].diqu);
	}
		rank(n);
	for(i=0;i<n;i++)
	{
		if(strcmp(country[i].name,"China")!=0)
		printf("%d %s %d %s\n",country[i].n,country[i].name,country[i].people,country[i].diqu);
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(country[i].name,"China")==0)
		{
		printf("%d %s %d %s\n",country[i].n,country[i].name,country[i].people,country[i].diqu);
		break;
		}
	}
	}
	return 0;
}
