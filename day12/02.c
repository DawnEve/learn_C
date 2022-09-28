#include<stdio.h>


//栈区：向下增长
void test1(int x){
	printf(">> &x:%p\n", &x);
	int a=0;
	int b;
	printf("&a:%p, &b:%p\n", &a, &b);  //22FExx
	
	int arr[]={1,2,3,4};
	int arr2[]={1,2,3,4};
	printf(" &arr:%p,  arr:%p\n", &arr, arr);   //22FE00
	printf("&arr2:%p, arr2:%p\n", &arr2, arr2); //22FDxx
}


int main(){
	int i=100;
	printf(">> &i:%p\n", &i);
	test1(i);
	
	return 0;
}