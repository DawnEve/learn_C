//二分法求方程的根，有缺陷：只能求一个跟，两个端点都是根时只能采用一个
// 用了2个函数，一个求方程值函数，一个求导数值的函数
#include <stdio.h>
#include <math.h>
#define N 1e-5  //设定计算精度
void main(){
	float x0,x1,x2,fx0,fx1,fx2;
	float fun(float);// 原方程f(x)=0的f(x)
	float fun1(float);//f(x)的导数

	do{
		//fx1=1;fx2=1;//初始化，防止跳出输入
		printf("请输入二分法求方程根的左右区间 x1 x2\n");
		scanf("%f%f",&x1,&x2);
		fx1=fun(x1);
		fx2=fun(x2);
	}while(fx1*fx2>0);

	if(fabs(fx1)<N){x0=x1;goto SHUCHU;}//这两个端点很可能是根
	if(fabs(fx2)<N){x0=x2;goto SHUCHU;}//这两个端点都是根时，这个不被采用………………以后改进……

	while(1){
		x0=(x1+x2)/2;
		fx0=fun(x0);
		if(fabs(fx0)<N) goto SHUCHU;//用goto跳出循环

		if(fx1*fx0>0){
			x1=x0;
			fx1=fx0;
		}else{
            x2=x0;
			fx2=fx0;
		}
	}

SHUCHU:printf("方程的根为：%f\n",x0);
}

float fun(float x){
	return(2*x*x*x-4*x*x+3*x-6);// 原方程f(x)=0的f(x)
}
float fun1(float x){
	return(6*x*x-8*x+3);//f(x)的导数
}