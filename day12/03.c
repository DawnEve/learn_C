#include<stdio.h>
#include<stdlib.h>

void test1(){
	int *p=malloc( sizeof(int) *5 );
	for(int i=0; i<5; i++){
		*(p+i) = 10*i;
	}
	for(int i=0; i<5; i++){
		printf("p+%d: %p, val: %d\n", i, p+i, *(p+i));
	}
	
	free(p);
}


int main(){
	test1();
	
	return 0;
}