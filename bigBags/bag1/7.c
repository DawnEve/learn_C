#include "stdio.h"
#include "math.h"
int main()
{
	float x,y;
	printf("input a x=");
	scanf("%f",&x);
	if(x!=0)
		y=sin(x)/x;
	else
		y=1;

	printf("x=%5.2f\nfunction y=%7.4f\n",x,y);
}

