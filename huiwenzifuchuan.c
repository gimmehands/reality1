#include<stdio.h>
#include<string.h>
int upside(char a[],int n);
int main(){
	char ch1[10001],ch2[10001];
	int n,i,sup,len;
	while(gets(ch1))
	{
				len=strlen(ch1);
		for(i=0;i<len;i++)
		{
				ch2[i]=ch1[i];
		}
				//printf("\n");	
				upside(ch1,len);
		for(i=0;i<len;i++)
				printf("%c",ch1[i+1]);	
		for(i=0;i<len;i++)
		{	
			sup=1;
			if(ch1[i+1]!=ch2[i])
			{
				sup=0;
				break;
			}
		}
		if(sup==1)
				printf("Yes\n");
		else
				printf("No\n");
	}
	return 0;
}
int upside(char a[],int n)		//×Ö·û´®Ë³Ðòµßµ¹ 
{
	int i,j;
	for(i=0,j=n;j>i;i++,j--)
	{		
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
	}
}
