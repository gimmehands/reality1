# include<stdio.h>
#include<stdlib.h>
char turn_form(char ch2[10001],int n);
int main(){
	char ch1[10001];
	int n=0,i,j; 
	while((ch1[n]=getchar())!='\n'){
		n++;
}
	turn_form(ch1,n);
	for(i=0;i<n;i++){
		printf("%c",ch1[i]);
}
	return 0;
}
char turn_form(char ch2[10001],int n)
{
	int i,j;
	for(i=0;i<n;i++){
	int ret1 = 'z' - 'a';
	int tmp1 = 'z' - ch2[i];
	int ret2 = 'Z' - 'A';
	int tmp2 = 'Z' - ch2[i];
	if((ch2[i] >= 'a') && (ch2[i] <= 'z')){
			ch2[i] = ch2[i] + 2 * tmp1-ret1;
}
	if((ch2[i] >= 'A') && (ch2[i] <= 'Z')){
			ch2[i] = ch2[i] + 2 * tmp2-ret2;
}
}
}
