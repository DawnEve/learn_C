/*
* 摘    要： 指针数组(元素均为指针类型数据的数组)的使用
*/

#include <stdio.h>
int main() {
    int i=0;
	printf("%p: i=%d\n", &i, i);
	//0. 定义 指针数组
	/*按结合性理解，
	p[5] 表示一个5元素数组
	左边的*表示元素是指针
	左边的char表示指针指向的是char */
    char *ptr[] = {"Pascal","Basic","Fortran", "Java","Visual C"};
	
	
	//1. 输出数组
	puts("\nPart I: output arr, in static mem");
    for (i=0; i<5; i++) {
        printf("%p: ptr[%d]=%s, addr of this ptr:%p\n", ptr[i], i, ptr[i], &ptr[i]);
    }
	
	
	//2. 把数组当子元素的指针，+1后移动的距离看，到了数组尾后
	puts("\nPart II: use the pointer array as element");
	//如果想定义指向数组的指针，简称数组指针，需要加括号
	//char (*pArr)[5] 表示一个指针，指向 char [5] 这个数组
	//本例中，元素不是char，而是指向char的指针，所以是
	char *(*pArr)[5]=&ptr;
	printf(" ptr:%p,  ptr+1:%p\n", ptr, ptr+1);
	printf("pArr:%p, pArr+1:%p\n", pArr, pArr+1);
	
	
	//3. 数组名 自动变 指针，指向的是其第一个子元素，其第一个子元素是指针
	puts("\nPart III: auto arr name to pointer, to its element");
	char **pChar=ptr;
	printf("  ptr:%p,   ptr+1:%p\n", ptr, ptr+1);
	printf("pChar:%p, pChar+1:%p: %s %s\n", pChar, pChar+1, *(pChar+1), pChar[1] );
	
	return 0;
} 

/*

元素均为指针类型数据的数组，称为指针数组。（类比整数数组）
定义形式为： 
  类型关键字  *数组名[数组长度];
例如
  char *pStr[5];
*/
