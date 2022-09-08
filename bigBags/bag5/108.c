/*
* 摘    要： 圆内接多边形面积越来越接近圆形，可以求圆周率——悖论，已经用过PI再求PI——会输出double了

    数学原理
	内接n边形，一边对的角度a = 2*PI/n， 
	S(三角形) = 2*r*r*sin a, 
	S(多边形) = n * S(三角形) = n * 2*r*r*sin a 
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932

//#define N 1e5    //这是细分的分数，关键，可修改-> 已经改为变量

double my_circle_area(double r, int N)
{
	return (N * 0.5*r*r*sin(2*PI/N));
}

void main()  
{
	double r = 1;
	double area1 = PI*r*r;
	printf("  circle:   %2.18f\n", area1);
	
	for(int i=5; i<1e4; i+=1e3){
		double area2 = my_circle_area(r, i);
		printf("N=%d, triangle: %2.18f\n", i, area2);
	}
}

