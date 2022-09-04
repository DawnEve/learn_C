/*
* 文件标识：练习---------指针数组的元素中存放的是地址，输出与赋值时要特别注意
* 摘    要： 字典顺序排序后的字符数组……用的指针数组——直观多了，直接赋值  指针数组的元素中存放的是地址 
*/
#include <stdio.h>
#include <string.h>

// 使用了指向指针的指针，是因为数组的元素是指针，而数组 变 指针作为参数时，指向其第一个元素(指针)
// p1->str1
// p2->str2
// p3->str3
// 其第一个元素是 *(p+0)，是一个指针，指向字符串。%p 显示指针变量值(地址)，%s 显示指针指向的字符串
void print(char **p, int len){
	for(int i=0; i<len; i++){
		//printf("%p[#%d]: %s\n", *(p+i), i, *(p+i) );
		printf("%p[#%d]: %s\n", p[i], i, p[i] );
	}
}

//bug: 为什么排序错误？ Visual C 没有到最后？ 
//原因: 因为数组长度不对，使用了 define 的长度，而我有增添了几个字符串。
//解决：动态获取数组长度

int main(){
	int i, j;
	printf("&i=%p; &\"hello\":%p\n", &i, "Hello");
	char *temp;
	// 声明一个10元素数组，每个元素是一个指向 char 的指针
	char  *ptr[] = {"Visual C", "Pascal", "Basic", "Fortran", "Java", "Python", "JavaScript", "R"};
	// get array length
	int len= sizeof(ptr) / sizeof(char*);
	printf("Array length: %d; %d / %d\n", len, sizeof(ptr),  sizeof(char*));
	//
	printf("\nBefore sort\n");
	print(&ptr[0], len);
	
	// 能计算指针的差吗？
	for(int i=0; i<len-1; i++)
		//printf("shift %d: %d \n", i, (void *)ptr[i+1] - (void *)ptr[i] );
		printf("shift %d: %d \n", i, ptr[i+1] - ptr[i] ); //数组中 指针变量 的差

	//sort: 把大的往后放
    for (i=0; i<len-1; i++){
		for (j = i+1; j<len; j++)	{
			if (strcmp( ptr[j], ptr[i]) < 0) {
				printf("addr: ptr[%d]=%p, ptr[%d]=%p: %s, %s\n",i, ptr[i],j, ptr[j], ptr[i],ptr[j]);
				temp = ptr[i]; //交换的指针变量中保存的地址，或者说指针变量的指向
      	        ptr[i] = ptr[j];
      	        ptr[j] = temp;
			}
		}
	}

	//	
	printf("\nAfter:\n");
	print(ptr, len);
	return 0;
}
