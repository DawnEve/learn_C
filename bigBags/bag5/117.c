/*
* 摘    要： 计算阶乘——函数的调用与递归
*/

#include <stdio.h>

double fact(double n) {
	if ((n == 1) || (n == 0))
		return 1;
	else
		return n*fact(n-1);
}

void main(){
	int m = 0;
	
	while (m >= 0){
		printf("please input a positive int:");
		scanf("%d", &m);
	    printf("%d! = %f\n\n",m, fact(m));
	}
}
