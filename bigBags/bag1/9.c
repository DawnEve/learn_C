#include <stdio.h>
#include <math.h>
void main()   /*if语句的层叠，{}的作用   */
{
	int x=0,y=0;	
	x=1;

	if (x)
	{                  /*if语句的层叠，{}的作用。可删除看结果的不同   */
		if(y) 
			printf("2\n");
	}                  /*if语句的层叠，{}的作用。可删除看结果的不同   */
	else printf("1\n");
}