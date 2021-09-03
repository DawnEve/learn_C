#include <stdio.h>
#include <math.h>
void main()  /*用  do{语句}while(表达式);   循环语句计算1+2+3+……+99+100=?  */
{
	int s=0,i=1;
	do
	{
		s+=i;
		i++;
	}
	while (i<=100);      /*此处的<=或<易错 */
	
	printf("1+2+3+……+99+100=%d\n",s);
}
