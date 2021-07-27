#include<stdio.h>
//指向一维数组的指针

int main(){
	int arr[]={1,20,300}, *p, *p1, *p2;
	//p=&arr;//day07/04.c:6:3: warning: assignment from incompatible pointer type
	p=arr;
	// C语言规定，数组名代表数组的首地址，也是第一个数组元素的地址。
	p1=&arr[0];
	p2=&arr[1];
	
	printf("p=%p(%d), p1=%p(%d), p2=%p(%d)\n", p,*p, p1,*p1, p2,*p2);
	
	printf("\n");
	//使用下标、指针输出数组
	for(int i=0; i<3; i++){
		int *pi=p+i;
		printf("arr[%d]=%d, *(p+%d)=%d (%p, %p)\n", i,arr[i],i, *(p+i), (p+i), pi );
	}
}
