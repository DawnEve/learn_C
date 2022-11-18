/*
* 摘    要： 很糟糕的随机函数rand()！！！没法用！！！放一块也能用了！ 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 2000
#define E 2.718281829

void main()  
{
	float x, y, fx;
	int i, n = 0;
	unsigned long t;

	t = (unsigned long)time(NULL);
	printf("time seed：%d\n\n", t);
	srand( t );
    //randomize();

	for (i=0; i<N; i++) {
		x = (float)rand()/RAND_MAX;
		y = (float)rand()/RAND_MAX;

		//计算曲线下面积 y=exp(-x), x 属于[0,1]
		fx = (float) exp(-x);
    	if (y < fx) {
			n++;
			if (!( n%100 ))	{
				printf("i=%d, X=%f, Y=%f, fx=%f,  n=%d\n", i, x, y, fx, n);
			}
		}
	}

	printf("\n计算值:%f \n真实值:%f\n", (float)n/N, (1-1/E));
}