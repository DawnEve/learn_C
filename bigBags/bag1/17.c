#include <stdio.h>

void main()   /*用 for(语句1;语句2;语句3){循环体；}  循环语句计算1+2+3+……+99+100=?  */
{               /*for(初值一次;限制条件 真 假;执行完循环体后执行这语句){循环体}*/
	int sum,i;
	sum=0;
	for(i=1;i<=100;i++)
		sum+=i;
    
	printf("1+2+...+99+100=%d\n",sum);
}