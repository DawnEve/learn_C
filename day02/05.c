#include<stdio.h>
// for(){};

int main(){
	int i=0, n=1, sum=0;
	printf("sum up from 1 to n, input n:");
	scanf("%d", &n);
	printf("your input is n=%d\n", n);
		
	for(i=0; i<=n; i++){
		sum+=i;
	}
	
	printf("sum of 1 to n is %d\n", sum);
	return 0;
}
