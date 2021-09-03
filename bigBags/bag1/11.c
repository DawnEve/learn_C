#include <stdio.h>
#include <math.h>
void main()  /*用if() goto行号   循环语句计算1+2+3+……+99+100=?  */
{
	int s=0,i=1;
loop: if (i<101)
	  {
		  s=s+i;
		  i++;
        goto loop;
	  }
	printf("1+2+3+……+99+100=%d\n",s);
}