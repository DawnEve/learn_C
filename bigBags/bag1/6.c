#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,z;
    printf("������һ��x:");
	scanf("%f",&x);
        y=abs(x);  /* fabs��ans����ȡ����ֵ����ʲô����*/
	z=fabs(x);  /* fabs��abs����ȡ����ֵ����ʲô����*/
	printf("\t y=abs(x)=%7.3f\n\tz=fabs(x)=%7.3f\n",y,z);
}