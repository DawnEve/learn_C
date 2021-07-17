#include<stdio.h>
#include "string.h"
// 二维数组初始化的三种方法

int main(){
	char name1[2][10]={{'J','o','h','n','\0'},{'M','a','r','r','y','\0'}};
	char name2[2][10]={{"John"},{"Marry"}};
	char name3[2][10]={"John","Marry"};
	
	printf("name1=%s %s\n", name1, name1[1]);
	printf("name2=%s %s\n", name2[0], name2[1]);
	printf("name3=%s %s\n", name3[0], name3[1]);
	
	return 0;
}
