#include <stdio.h>

int main(){
	int arr1[5]={-1, 10,20,30,40};
	int arr2[5]={0,  1, 2, 3, 4};
	int i=0;
	
	arr1[i++]=arr2[i];	//i++发生在什么时候？arr1第几位被覆盖了?
	
	int j=3;
	arr1[j]=arr2[j++]; //i++发生在什么时候？arr1第几位被覆盖了?
	
	for(i=0; i<5; i++){
		printf("arr1[%d]=%d\n", i, arr1[i]);
	}
	return 0;	
}

/* 这个分析都是错误的！直接跳过看第二段注释
* int i=0; arr1[i++]=arr2[i]; 
* 现象: arr1被覆盖的是 arr1[0]，值来自于 arr2[1]
* 分析(错误的): 先计算的i++(左侧给出0下标，然后自增)，然后右侧取值(下标是自增后的1)覆盖
*
* int j=3; arr1[j]=arr2[j++];
* 现象: arr1被覆盖的是 arr1[4]，值来自于 arr2[3]
* 分析（错误的）：先 i++(右侧给出3下标，然后自增为4)，然后右侧取值[3]，覆盖给左侧[4]
*/



/*
* 这种类似的都是UB? 啥是 UB
ub 和 优先级 没有关系。
a[i++] = b[i] 和 a[i] = b[i++] 这种类似的都是UB：undefined behaviour
我觉得正确的是不使用UB，而不是研究UB。

知识点: 副作用、序列化


解释: 
c primer plus(6th) 5.4.2 side effect and sequence point
赋值、自增、自减对运算对象的修改必须在下条语句前完成，至于本条语句内完成的顺序，编译器自己决定。

正确的写法，就是分开成多条语句:
i++;
a[i] = b[i];
*/
