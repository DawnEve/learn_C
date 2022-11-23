/*
* 问题与思路：见本文底部
* 摘    要： 哨兵追赶逃犯问题  研究 哨兵的速度至少为多少时能在大门前追上逃犯——计算机模拟  经典
* 实时调整—研究三角监狱问题
*/

#include <stdio.h>
#include <math.h>

#define AB 1000    // 三角形的边长      //////////假定人的速度为1
#define VA 1

#define X0 0
#define Y0 (AB/2)
#define S0 0.01     //近似的认为已经追上的最大距离
#define MAX 1e9   //当调整次数太大时，停止

#define P0   1.1548    // 这个一会作为变量输入
#define DP (-0.00001)  // 哨兵速度的步长增量

void main() {
	int getTime(double p);
	double p = (double) P0;
	int i = 0;

	while(i<100) {
		getTime(p);
		p += (double) DP;
		i++;
	}

	printf("\n");
}


//核心函数  
int getTime(double p) {
	double x, y, s, d, t = 1e-5;
	// t = 1e-5 是多长时间调整一次方向，
	// 越小越像实时调整方向，但速度也越慢；
	// 过大时会震荡，可以逐渐试验，震荡时就继续调小
	int nStep = 0;

	x = X0; y = Y0; d = - AB/2 * sqrt(3); 
	s = (double) sqrt( y*y + (x-d)*(x-d) );   /*逃犯与哨兵距离 */    

	while (s >= S0) {
		d += 1 * t;
		x -= p * t * (x-d)/s;
		y -= p * t * y/s;
		s = (double) sqrt( y*y + (x-d)*(x-d) );  /*逃犯与哨兵距离 */
		/* 测试用输出语句 if (nStep%100000000 == 0)  printf("\n\t s = %0.5f", s); */
		nStep++;            //记录 哨兵 方向调整此数

		if ( nStep > MAX )  //当调整次数太大时，停止
		{
			nStep = -1;
			break;
		}
	}

	if(nStep >0 )
	{
		printf("\nd = %0.6f, p = %0.9f,  Number = %d,  time = %.3f",
		            d, p, nStep, t*nStep);
		return 1;
	}
	else
	{
		printf("\n可能出现发散震荡现象，请调整p，重新计算！");
		return -1;
	}
}


/*
问题:
三角形大号监狱，只有一个门，逃犯逃跑，哨兵开始追赶，要不断调整自己的方向，以保持始终指向逃犯。
问题是，研究 哨兵的速度至少为多少时能在寨门前追上逃犯？

坐标系建立，逃犯方向为x轴正方向，哨兵向x轴做垂线，交点为原点（也就是大门），哨兵在y轴正方向上

可调选项
 P0       初始值
 DP       增量 
 t        调整方向的时间间隔
 AB       等边三角形的边长

输出结果
d        追上的坐标

研究结果：哨兵的速度至少是逃犯的1.1525375倍时，才能在逃犯出门前追上逃犯
*/