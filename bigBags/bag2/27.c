#include <stdio.h>
#include <math.h>
void main()  /* 打印图形  三角形*/
{
	int i,t;
	for(i=1;i<=5;i++)
	{
		for(t=1;t<=20-i;t++) 
			printf(" ");   /* 这个20可调，用来控制三角形的水平位置*/
		for(t=1;t<=2*i-1;t++) 
			printf("*");  /* 双重循环。外循环控制行，内循环控制列*/
       printf("\n");
	}
}