# include<stdio.h>
int main(){
	int m,n,N,cnt=0,opp[501];
	scanf("%d",&N);
	for(m=0;m<N;m++){
		scanf("%d",&opp[m]);
	}
	for(n=0;n<N-1;n++){
		for(m=n;m<N;m++){
			if(opp[n]==-opp[m])
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}

