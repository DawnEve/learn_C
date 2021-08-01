#include<stdio.h>
int main(){
	int myvar=12; //变量
	int **ptr_to_ptr; 
	int *ptr=&myvar; //变量的地址保存在ptr中，ptr是地址，也被称为指针
	ptr_to_ptr=&ptr; //ptr本身的地址保存在 ptr_to_ptr 中，该变量是指向指针的指针。

	printf("value and address\n");
	printf("%d (%p)\n", myvar, &myvar);
	printf("%d (%p, %p)\n", *ptr, &ptr, ptr);
	printf("%d (%p, %p, %p)\n", **ptr_to_ptr, &ptr_to_ptr, ptr_to_ptr, *ptr_to_ptr);
	return 0;
}