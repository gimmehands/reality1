# include<stdio.h>
# include<string.h>
int upside(char ch[],int a,int b);
int main(){
	char ch[501],s1,s2;
	int m,n,x=0,i,j;
	scanf("%d",&n);
	while(n!=0){
		getchar();
		while(scanf("%c",&ch[x])&&ch[x]!='\n') x++;
		m=strlen(ch);
		scanf("%c %c",&s1,&s2);
		for(x=0;x<=m;x++){
			if(ch[x]==s1)
			i=x;
			if(ch[x]==s2)
			j=x;
		}
		upside(ch,i,j);
		puts(ch);
			n--;
	}
} 
int upside(char ch[],int a,int b)		//×Ö·û´®Ë³Ðòµßµ¹ 
{
	int i,j;
	char temp;
	for(i=a,j=b;i<j;i++,j--)
	{		
				temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
	}
}
