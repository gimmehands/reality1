# include<stdio.h>
# include<string.h>
int main(){
	int x,m,n;
	char ch[101][101],temp[201];
	scanf("%d",&x);
	ch[101][101]=getchar();
	for(m=0;m<x;m++)
		gets(ch[m]);
	for(n=0;n<x-1;n++)
		for(m=0;m<x-n-1;m++){
			if(strcmp(ch[m],ch[m+1])>0){
				strcpy(temp,ch[m]);
				strcpy(ch[m],ch[m+1]);
				strcpy(ch[m+1],temp);
		}
	}
	for(m=0;m<x;m++)
		puts(ch[m]);
}
