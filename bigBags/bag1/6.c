#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,z;
    printf("请输入一个x:");
	scanf("%f",&x);
        y=abs(x);  /* fabs和ans都是取绝对值，有什么区别？*/
	z=fabs(x);  /* fabs和abs都是取绝对值，有什么区别？*/
	printf("\t y=abs(x)=%7.3f\n\tz=fabs(x)=%7.3f\n",y,z);
}