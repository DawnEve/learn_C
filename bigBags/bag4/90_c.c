#include<stdio.h>


// 1.关于 指向字符串的指针 
void test1(){
	//(1) 首先 字符串 字面量有地址，在静态区
	printf("\nPart 1: string literal in static region\n");
	int i=50;
	printf("&i=%p, Hello:%p\n", &i, "Hello");
	
	char *pStr="hello"; // static region
	char arrStr[]="hello";
	printf("  pStr:%p \n", pStr);
	printf("arrStr:%p \n", arrStr);
	
	//(2) 指针是一个变量，其值是一个地址，占8位；
	printf("\nPart 2: size of pointer is 8\n");
	int *pi=&i;
	printf("sizeof pStr:%d, pi:%d \n", sizeof(pStr), sizeof(pi));
	
	//(3) 指针变量相关的2个地址，首先作为变量需要地址来保存(&p)，其次指针变量中保存的是一个地址(p)。
	printf("\nPart 3: two address relating to pointer\n");
	printf("the addr to store the ptr parameter: %p, %p\n", &pStr, &pi);
	printf("the addr in the ptr parameter: %p, %p\n", pStr, pi);
	
	//(3) 指针指向的值，需要前面加 解引用符 *
	// 一维数组 自动转 的指针，指向该一维数组的第一个子元素。字符串，就是其第一个字符
	printf("value1: %c, %d\n", *pStr, *pi);
	// 打印字符串的方法，就是从一个字符的地址开始，直到遇到/0位置
	printf("value2: %s, %s\n", pStr, pStr+1); //+1 是跳过一个字符
	
	char arr3[]={'h', 'i', ',', '\0', 'T', 'o', 'm'};
	printf("value of arr3: %s, %s\n", arr3, arr3+1);
	//想要完全打印
	for(int j=0; j< sizeof(arr3)/sizeof(char); j++ )
		putchar(arr3[j]); //逐个字符打印
	putchar('\n');
}

// 2.字符串指针构成的数组
int main(){
	test1();
	
	return 0;
}
