/*
* 问题与思路：本文件末尾
* 摘    要： 中子扩散  研究 铅版厚度 与中子行为的关系——计算机模拟  经典 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.141592653589793238

#define N0 10  // 因素（可调）（较固定）
//n0次碰撞之后中子能量全部被吸收

void main() {
	void simulate(int m, int nx);
	int i = 1, m, nx = 1000000 ;//m铅版厚度，nx中子总数

	//研究 m铅版厚度 与中子 行为的关系
	// 厚度到 m=9 的时候穿透率已经是0了
	for (m=0; m<28; m++)
	{
		printf("\n\t第%d次模拟：", i++);
		simulate(m, nx);
	}
}


void simulate(int m, int nx) {
	float nr = 0, np = 0, na = 0;
	int i, n;
	double x;

/*	printf("Deepth of reactor wall: ");
	scanf("%d", &m);
    printf("Total of neutrons: ");
	scanf("%d", &nx);
*/

	//随机函数时间种子
	srand( (unsigned long)time(NULL) );
	
    for (i=0; i<nx; i++){
		x = 0;
		n = 0;

		do {
			x += cos( (double) 2*PI*rand()/RAND_MAX);
			n++;
			if (n>N0){
				na++; break;
			}else{
				if (x<0) {nr++; break;}
				if (x>m) {np++; break;}
			}
		}while(1);
	}
	/* 测试用输出 printf("\n事后\n穿透np=%.2f  \n吸收na=%.2f  \n反弹nr=%.2f  \n", np, na, nr); */

	printf("(铅版厚度为%d*d时%d个中子的统计结果)\n穿透率np=%.2f%%  \t吸收率na=%.2f%%  \t反弹率nr=%.2f%%\n",
		            m, nx, 100.0*np/nx, 100.0*na/nx,  100.0*nr/nx);
}
			


/*

# 问题:
中子与铅版墙壁碰撞后会损失能量，并产生随机角度，沿此方向前进一定距离（设此距离为铅原子直径d），之后再碰再走……

n0次碰撞之后中子能量全部被吸收。但能量消失之前，中子可能反弹回反应堆，可能穿透铅版。

要求给出铅版厚度为m*d时的穿透率np%   吸收率na%  反弹率nr%



# 思路：

随机角度JD = 2*PI* rand()/RAND_MAX;

设中子在某次碰撞前与内壁的距离为x， 则下一次碰撞前x变化为x += d*cos(JD); 

碰撞中统计穿透率np%,反弹率nr%，剩下的是 吸收率na% 



# 研究结果：

随着铅版厚度的增加，穿透率 下降，最后为零； 吸收率、反弹率增加，最后稳定在一个很小的范围
*/