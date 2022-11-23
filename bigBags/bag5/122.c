/*
* 摘    要： 蒙特卡洛法求圆周率 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_POINTS 1e7    //定义随机点数

void main() {
	int counter, i;
	float x, y;

	//时间种子初始化随机数函数
	srand( (unsigned long)time(NULL) );

	// 随机点，距离圆心距离小于1则在圆内
	counter = 0; //注意初始化
	for (i=0; i<=N_POINTS; i++) {
		x = (float) rand()/RAND_MAX;
		y = (float) rand()/RAND_MAX;
		if (x*x + y*y <= 1.0)
			counter++;
	}

	printf("counter=%d\n", counter);

	//总面积: 半径是1的圆所在的正方形面积(2*2=4)
	// 乘以 概率: 园内点数 / 总点数
	printf("The PI is %f\n", 4.000 * counter/N_POINTS); 
}