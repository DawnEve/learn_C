/*
* 递归法：要理解主要是展开，即把递归的部分换成一个花括号，里面是这个函数本身；
                          一直换到没有递归调用为止
* 摘    要： 将一个整形数字输出为字符串——递归法
*/

#include <stdio.h>

void convert(int n) {
	printf(">>start &n:%p, n:%d\n", &n, n);
	int i;
	if ((i = n/10) != 0){
		convert(i);
	}

	//把+ '0'去掉之后会出错
	putchar( n%10 + '0' ); //原理很简单，就是 字符'0'对应的int 加上偏移量，再按照 char 打印
	printf(">>>>end &n:%p, n:%d\n", &n, n);
}


void main(){
	int number;
	printf("int> ");
	scanf("%d", &number);
	
	printf("\noutcome> \n");
	if (number < 0) {
		putchar('-');
		number *=-1;
	}
	convert(number);
	puts("");
}

