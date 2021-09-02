#include <stdio.h>
#include <math.h>
int main()  /*输入三个数，排序后从大到小输出。用了三目表达式  */
{
	float a,b,c,x,y,z;
    printf("请输入三个实数，用空格分开\n");
	scanf("%f %f %f",&a,&b,&c);
 
	/*******************方法一  */
	/*   x=(a>b)?a:b;   y=(x>c)?x:c;     /*y最大值  */
	/*   x=(a<b)?a:b;   z=(x<c)?x:c;     /*z最小值  */
 
	/*******************方法二  */
	y=(a>( (b>c)?b:c ) ) ? a: ((b>c)?b:c);        /*y最大值  */
    z=(a<( (b<c)?b:c ) ) ? a: ((b<c)?b:c);        /*z最小值 ，逻辑易出错！！！ */
 
	/**输出  */
	x=a+b+c-y-z;
    printf("%2.1f,%2.1f,%2.1f\n",y,x,z);
}
   
