#include <stdio.h>
#include <math.h>
void main()  /* �ж��ǲ�������  */
{
	int x=0,y;
	printf("which year?");
	scanf("%d",&y);
	
	x=((y%4==0 && y%100!=0) || (y%400==0));
	
	printf("x=%d, y=%d\n",x, y);
	if (x)  printf("%d��������\n",y);
	else  printf("%d�겻������\n",y);
}
