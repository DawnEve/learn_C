#include <stdio.h>
#include <math.h>
void main()   /*if���Ĳ����{}������   */
{
	int x=0,y=0;	
	x=1;

	if (x)
	{                  /*if���Ĳ����{}�����á���ɾ��������Ĳ�ͬ   */
		if(y) 
			printf("2\n");
	}                  /*if���Ĳ����{}�����á���ɾ��������Ĳ�ͬ   */
	else printf("1\n");
}