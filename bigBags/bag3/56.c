#include <stdio.h>
#include <string.h>
#define N 100000
//10w以下提成0.1，超过10w低于20w的部分提成0.075，超过20w低于40w的部分提成0.05，超过40w低于60w的部分提成0.03，超过60w低于100w的部分提成0.015，超过100w的部分提成0.001
void main()       //由利润用分段函数，计算奖金的函数一
{
	long i;
	float bonus,bon1,bon2,bon4,bon6,bon10;
	bon1=N*0.1;
	bon2=bon1+N*0.075;
	bon4=bon2+2*N*0.05;
	bon6=bon4+2*N*0.03;
	bon10=bon6+4*N*0.015;

	printf("请输入利润i：");
	scanf("%ld",&i);

	if(i<N)
		bonus=i*0.1;
	else if(i<=2*N)
		bonus=bon1+(i-N)*0.075;
	else if(i<=4*N)
		bonus=bon2+(i-2*N)*0.05;
	else if(i<=6*N)
		onus=bon4+(i-4*N)*0.03;
	else if(i<=10*N)
		bonus=bon6+(i-6*N)*0.015;
	else 
		bonus=bon6+(i-10*N)*0.001;

	 printf("奖金是：%10.2f\n",bonus);   //这里的输出数据类型一开始弄错了（10.2ld），输出了一个00.
}