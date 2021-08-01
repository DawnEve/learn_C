//例2: 用二级指针处理字符串
#include<stdio.h>
int main(){
	char **ptr; //这是指向指针的指针
	
	//这是指针数组，本质是一个一维数组，其元素是指针。
	//这些指针指向char数组。C的字符串就是char组成的一维数组。
	char *names[]={"hello", "good", "world", "bye", ""};
	
	ptr=names+1; //这个二维指针+1，表示在第二维上移动一位，指向下一个字符串。
	printf("%o: %s  ", *ptr, *ptr);// 输出是good
	ptr+=2; //再移动2个，指向bye首地址
	while(**ptr != '\0'){
		printf("%s\n", *ptr++);
	}
	
	//重置位置
	printf("\n");
	ptr=names;
	while(**ptr != '\0'){
		printf("%s\n", *ptr++);
	}
	return 0;
}