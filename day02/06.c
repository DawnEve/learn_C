#include<stdio.h>
// break and continue;

int main(){
	int n=100;
	
	printf("能被100整除的数字? what %d can be divided by except 1 and n? \n", n);
	//1
	for(int i=2; i<n; i++){
		if(n%i!=0){
			continue;
		}
		printf("%d / %d = %d\n", n, i, n/i);
	}
	
	//2
	for(int i=1; i<n; i++){
		if(i>5){ break; }
		printf("try number i=%d\n", i);
	}
    printf("==> the last line\n");
	
	return 0;
}
