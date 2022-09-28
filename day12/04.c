#include<stdio.h>

int a1=1;
int a2;
static int a3=100;

int main(){
	int b1=1;
	int b2;
	static int b3=100;
	
	printf("&a1=%p, &a2=%p, &a3=%p\n", &a1, &a2, &a3);
	printf("&b1=%p, &b2=%p, &b3=%p\n", &b1, &b2, &b3);
	printf("&\"hi\": %p\n", &"hi");
	
	return 0;	
}