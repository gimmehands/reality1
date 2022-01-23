# include <stdio.h>

int main()
{
	int x,i;
	while(~scanf("%d",&x)){
		int n=0;
	for ( i=2; i<x-1; i++){
		if( x%i == 0){
			n++;
		}
	}
	if ( n==0){
		printf("Yes\n");
	}	else {
		printf("No\n");
	}
}
	
	return 0;
}
