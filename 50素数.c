# include <stdio.h>

int main()
{	int x;
	int cnt;
	
	x = 1;
	while (cnt<50){
		int i;
		int isprime = 1;	
	for ( i=2; i<x; i++){
		if( x%i == 0){
			isprime = 0;
			break;
		}
	}
	if ( isprime == 1){
		cnt++;
		printf("%d\t",x);
		if ( cnt%5 ==0){
			printf("\n");
		}
		}
		x++;
	}
}
