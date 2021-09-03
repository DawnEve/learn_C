#include <stdio.h>
#include <math.h>
void main()  /* 判断是不是闰年  */
{
	int x=0,y;
	printf("which year?");
	scanf("%d",&y);
	
	x=((y%4==0 && y%100!=0) || (y%400==0));
	
	printf("x=%d, y=%d\n",x, y);
	if (x)  printf("%d年是闰年\n",y);
	else  printf("%d年不是闰年\n",y);
}
