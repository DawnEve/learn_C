#include <stdio.h>
void main()  //接触指针
{
	int a,*pa=NULL;
	a=12;
	pa=&a;
	printf("数字a=%d,\n他的指针为：%p\n十进制%d\n八进制%o\n十六进制%x\n",
		*pa,pa, *pa, *pa, *pa);
}