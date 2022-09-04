/*
* 摘    要： 字典顺序排序后的字符数组……用的字符数组
*/

#include <stdio.h>
#include <string.h>
#define _STRING_LEN_ 20

/** 打印字符串数组: 数组作为参数，传递的只能是指向数组的指针，定义指针要用圆括号
* 第一个参数是一个指针，指向原数组的第一个元素 / 损失掉原数组的最高维，
* 第二个参数，是原数组的最高维
*/
void print(char (*pchar)[_STRING_LEN_], int n){
	for(int i=0; i<n; i++){
		printf("[%d] %s\n", i, pchar[i]);
	}
}

void main(){
	int i, j;
	char temp[_STRING_LEN_]; //之前设置为10，因为js全称正好10，没有为/R留空间，所以字符串打印错乱
	char  str[][_STRING_LEN_] = {"Visual C","Pascal","Basic","Fortran", "Java", "Python", "JavaScript", "R"};
	int len=sizeof(str) / sizeof( char[_STRING_LEN_] );
	printf("len of arr: %d\n", len);

	//1. print
	printf("\nBefore sort:\n");
	print(str, len);

	//2. sort
    for (i=0; i<len-1; i++){
		for (j = i+1; j<len; j++) {
			if (strcmp(str[j], str[i]) < 0) {
				strcpy(temp,str[i]);
      	        strcpy(str[i],str[j]);
      	        strcpy(str[j],temp);
			}
		}
	}

	//3. check
	printf("\nAfter sort:\n");
	print(str, len);
}
