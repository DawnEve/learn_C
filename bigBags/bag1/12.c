#include <stdio.h>
#include <math.h>
void main()  /*��   while(���ʽ) {���}   ѭ��������1+2+3+����+99+100=?  */
{
 int s=0,i=1;
 while (i<=100)
 { s+=i;
   i++;
 }
 printf("1+2+3+����+99+100=%d\n",s);
}
