# include<stdio.h>
# include<string.h>
int func(char ch);
int main(){
	int m,n;
	char ch4[140001]="START",ch5[140001]="END",ch6[140001]="ENDOFINPUT";
	char ch1[140001],ch2[140001],ch3[140001];
	while(gets(ch2)){				//��������START����ENDOFINPUT�ж��Ƿ���г���ѭ�� 
		if(strcmp(ch2,ch4)==0){
	gets(ch1);						//��������ܵ��ַ��� 
	gets(ch3);						//����������END���ж��Ƿ� 
	if(strcmp(ch3,ch5)==0){
	m=strlen(ch1);
	for(n=0;n<m;n++)
		ch1[n]=func(ch1[n]);		//���ܺ��� 
	puts(ch1);						//������ܺ��� 
}
}
	if(strcmp(ch2,ch6)==0) break;	//�������Ϊ ENDOFINPUT�������� 
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
