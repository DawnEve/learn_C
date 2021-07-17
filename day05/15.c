#include<stdio.h>
#include "string.h"
// 字符串排序: 对几个水果，按照ascii码排序
// Ｃ语言允许把一个二维数组按多个一维数组处理
int main(){
	char fruits[][10]={"apple", "grape", "peach", "pear", "banana", "pineapple"};
	
	for(int i=0; i<6; i++){
		printf("%s\n", fruits[i]);
	}
	
	//sort 
	char tmp[10];
	for(int i=0; i<6; i++){
		for(int j=i; j<6; j++){
			if( strcmp(fruits[i], fruits[j])>0 ){
				strcpy(tmp, fruits[i]);
				strcpy(fruits[i], fruits[j]);
				strcpy(fruits[j], tmp);
			}
		}
	}
	
	printf("== after sorting ==\n");	
	for(int i=0; i<6; i++){
		printf("%s\n", fruits[i]);
	}
	
	
	return 0;
}
