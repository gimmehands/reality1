# include<stdio.h>
# include<string.h>
int func(char ch);
int main(){
	int m,n;
	char ch4[140001]="START",ch5[140001]="END",ch6[140001]="ENDOFINPUT";
	char ch1[140001],ch2[140001],ch3[140001];
	while(gets(ch2)){				//首行输入START或者ENDOFINPUT判断是否进行程序循环 
		if(strcmp(ch2,ch4)==0){
	gets(ch1);						//输入需解密的字符串 
	gets(ch3);						//结束行输入END，判断是否 
	if(strcmp(ch3,ch5)==0){
	m=strlen(ch1);
	for(n=0;n<m;n++)
		ch1[n]=func(ch1[n]);		//解密函数 
	puts(ch1);						//输出解密函数 
}
}
	if(strcmp(ch2,ch6)==0) break;	//如果输入为 ENDOFINPUT结束程序 
}
	return 0;
}
int func(char ch){
	const int n='V'-'A';
	if(ch>='A'&&ch<='Z'){
		if(ch>='A'&&ch<='E')
			ch=ch+n;
		else
			ch=ch-5;
	}
	return ch;
}
