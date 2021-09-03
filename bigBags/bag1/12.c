#include <stdio.h>
#include <math.h>
void main()  /*用   while(表达式) {语句}   循环语句计算1+2+3+……+99+100=?  */
{
 int s=0,i=1;
 while (i<=100)
 { s+=i;
   i++;
 }
 printf("1+2+3+……+99+100=%d\n",s);
}
