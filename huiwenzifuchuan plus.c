# include<stdio.h>
# include<string.h>
int upside(char ch[],int n);
int main(){
	char ch1[10001],ch2[10001];
	int n,i,m,sup;
	while(gets(ch1)){
		sup=1;
		n=strlen(ch1);
		strcpy(ch2,ch1);
	upside(ch1,n);
	for(i=0;i<n;i++){
		if(ch1[i]!=ch2[i]){
			sup=0;
			break;
		}
	}
	if(sup==1)
	printf("YES\n");
	else
	printf("NO\n");
	fflush(stdin);
	}
	return 0;
}
int upside(char ch[],int n){
	int i,j,t,m=(n-1)/2;
	for(i=0;i<=m;i++){
		j=n-i-1;
		t=ch[i];ch[i]=ch[j];ch[j]=t;
	}
}
