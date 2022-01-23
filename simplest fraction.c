# include<stdio.h>
int gcd(int a, int b);
int main(){
	int N,i,m,n,cnt=0,frac[601];
	while(scanf("%d",&N)!=EOF){
		if(N==0)break;
		cnt=0;
	for(i=0;i<N;i++){
		scanf("%d",&frac[i]);
}
	for(m=0;m<N-1;m++){
		for(n=m+1;n<N;n++){
			if(gcd(frac[m],frac[n])==1)
			cnt++;
}
}
		printf("%d\n",cnt);
}
} 
int gcd(int a, int b) {  
    if(b==0) 
        return a;  
    else 
        return gcd(b, a%b);  
 }  
