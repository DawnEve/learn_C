#include <stdio.h>
#include <math.h>
void main()  /*��if() goto�к�   ѭ��������1+2+3+����+99+100=?  */
{
	int s=0,i=1;
loop: if (i<101)
	  {
		  s=s+i;
		  i++;
        goto loop;
	  }
	printf("1+2+3+����+99+100=%d\n",s);
}