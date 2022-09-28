/*
* 摘    要： 对N个字符串排序，用指向指针的指针
*/

#include <stdio.h>
#include <string.h>
#define LINEMAX 20

void sort(char **p, int len){
	int i, j;
    char *temp;

    for(i=0; i<len; i++) {
		for (j=i+1; j<len; j++)	{
			if (strcmp(*(p+i), *(p+j)) > 0)	{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
}



void main() {

	//定义字符串
	char str[][LINEMAX] = {"Pascal", "Basic", "Fortran", "Java", "Visual C", "JavaScript", "R"}; 
	int len = sizeof(str) / sizeof(char[LINEMAX]);
	char **p, *pstr[len]; 	//**p为指向指针的指针

	// 把数组的数组，转运到 指针的数组中
	for (int i=0; i<len; i++) {
		pstr[i] = str[i];
	}
	
	//输出1
	printf(">> strings:\n");
	for (int i=0; i<len; i++) {
		printf("%p %s\n", pstr[i], pstr[i]);
	}
	printf("\n");
	
	// 数组 转 指针，是指向数组的第一个元素：一个指向字符串的 指针
	p = pstr;
	// 排序
	sort(p, len); //第一个参数是 p 或 pstr 效果一样

	//输出
	printf(">> strings sorted:\n");
	for (int i=0; i<len; i++) {
		printf("%p %s\n", pstr[i], pstr[i]);
	}
	printf("\n");
}



