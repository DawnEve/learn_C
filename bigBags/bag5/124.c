/*
* 问题与思路：本文底部
* 摘    要： 导弹在追击飞机  研究 导弹以多大的时间间隔进行方向调整为好——计算机模拟  经典
*/

#include <stdio.h>
#include <math.h>

#define VA 500
#define VM 1000
#define X0 40000
#define Y0 100000
#define S0 0.5     //近似的认为已经追上的最大距离
#define MAX 1e8   //当调整次数太大时，停止

#define T0 0.000001   //初试时间步长
#define DT 1e-6   //时间步长增量 1e-6

void main() {
	int getTime(float t);
	float t0 = (float) T0;

	int i = 0;

	for(; i<300; i+=5){
		float t = t0+ (float) DT*i;
		printf("[%d] ", i);
		getTime(t); //间隔时间
	}

	printf("\n");
}


//核心函数
int getTime(float t)
{
	float x, y, s, d;
	int nStep = 0;

	x = X0; y = Y0; d = 0;
	s = (float) sqrt( y*y + (x-d)*(x-d) );   //导弹与飞机距离

	while (s >= S0)	{
		d += VA * t;
		x -= VM * t * (x-d)/s;
		y -= VM * t * y/s;
		s = (float) sqrt( y*y + (x-d)*(x-d) );   //导弹与飞机距离
		nStep++;    //记录导弹方向调整此数

		if (nStep>MAX)  //当调整次数太大时，停止
		{
			nStep = -1;
			break;
		}
	}

	if(nStep >0 ) {
		printf("step=%0.7f, Number=%d, time=%.2f\n",  t, nStep, t*nStep);
		return 1;
	} else {
		printf("可能出现发散震荡现象，请调小t，重新计算！\n");
		return -1;
	}
}


/*
# 问题:
导弹在追击飞机时，要不断调整自己的方向，以保持弹头始终指向飞机。
问题是，导弹以多大的时间间隔进行方向调整为好？

思路：此题用数学方程求很困难；用计算机模拟是不错的选择
设
	t: 时间步长变量；
	(x, y): 某一瞬间导弹坐标；
	(d, 0): 某一瞬间飞机坐标；
	vm: 导弹速度；
	va: 飞机速度；
	s: 导弹与飞机距离；
	JD: 导弹与飞机方向角；

可知
	s = aqrt( y*y + (x-d)*(x-d) );
导弹飞行角度JD满足
	sin(JD) = (x-d)/s;  cos(JD) = y/s;
每经过一个时间步长，导弹与飞机的位置将变化为：
	x -= vm * t * sin  ;
	y -= vm * t * cos  ;
	d += va * t;


# 分析
	*时间步长t过大会出现震荡，震荡可能收敛，也可能发散；
	*一般若t足够小，则平滑收敛；
	*故，可从小t开始，逐渐加大时间步长，系统会一次经历  平滑收敛——震荡收敛——发散震荡


# 研究结果：
	步长太长会震荡，太小就接近实时状态了
*/