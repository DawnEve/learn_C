#include<stdio.h>
#include<stdlib.h>

int main(){
	char *p1=(char*)malloc(sizeof(char)*10); //栈上的指针，指向堆的空间
	printf("&p1:%p -> p1:%p\n", &p1, p1);
	
	free(p1);
	return 0;
}