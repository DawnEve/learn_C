#include <stdio.h>
#include <string.h>
#define N 100000
void mai1(long i)       //由利润用分段函数，计算奖金的函数一
{
	float bonus,bon1,bon2,bon4,bon6,bon10;
	bon1=N*0.1;
	bon2=bon1+N*0.075;
	bon4=bon2+2*N*0.05;
	bon6=bon4+2*N*0.03;
	bon10=bon6+4*N*0.015;
	//	printf("请输入利润i：");
	//	scanf("%ld",&i);
	if(i<N)
		bonus=i*0.1;
	else if(i<=2*N)
		bonus=bon1+(i-N)*0.075;
    else if(i<=4*N)
		bonus=bon2+(i-2*N)*0.05;
	else if(i<=6*N)
		bonus=bon4+(i-4*N)*0.03;
	else if(i<=10*N)
		bonus=bon6+(i-6*N)*0.015;
	else 
		bonus=bon6+(i-10*N)*0.001;

	printf("函数一 用if\n 奖金是：%10.2f\n",bonus);   //这里的输出数据类型一开始弄错了（10.2ld），输出了一个00.
}

/*
由利润用分段函数，计算奖金的函数二
*/
void mai2(long i)       //由利润用分段函数，计算奖金的函数2
{
	float bonus=0,bon1,bon2,bon4,bon6,bon10;
	int c;

	bon1=N*0.1;
	bon2=bon1+N*0.075;
	bon4=bon2+2*N*0.05;
	bon6=bon4+2*N*0.03;
	bon10=bon6+4*N*0.015;

	//	printf("函数二—请输入利润i：");
	//	scanf("%ld",&i);
	c=i/N;   //这是个强制数值转化，能强制转化为整形

   if(c>10)  c=10;
   switch(c) {
	   case 0:bonus=i*0.1;break;
	   case 1:bonus=bon1+(i-N)*0.075;break;
	   case 2:
	   case 3:bonus=bon2+(i-2*N)*0.05;break;
	   case 4:
	   case 5:bonus=bon4+(i-4*N)*0.03;break;
	   case 6:case 7:case 8:
	   case 9:bonus=bon6+(i-6*N)*0.015;
	   case 10:bonus=bon10+(i-10*N)*0.01;
   }
   printf("函数二 用switch\n 奖金是：%10.2f\n",bonus);   //这里的输出数据类型一开始弄错了（10.2ld），输出了一个00.
}


void main()   //用函数调用，分别两次计算奖金。前两个例子的综合
{
	int p;
	printf("请输入利润i：");
	scanf("%ld",&p);
	puts("");

	mai1(p);
	puts("");
	
	mai2(p);
	puts("");
}