#include<stdio.h>
int main(){
	int n;
	printf("input a score? 100, 99 or others: ");
	//n=getchar();
	scanf("%d", &n);
	//printf("Your input is %d\n", n);
	
	char *rs;
	
	switch(n){
		case 100: rs="your 100"; break;
		case 99: rs="your 99"; break;
		default: rs="default result."; break;
	}

	printf("input: %d, output: %s\n", n, rs);
	return 0;
}
