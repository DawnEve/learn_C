#include <stdio.h>
#include <math.h>
void main()  /*��  do{���}while(���ʽ);   ѭ��������1+2+3+����+99+100=?  */
{
	int s=0,i=1;
	do
	{
		s+=i;
		i++;
	}
	while (i<=100);      /*�˴���<=��<�״� */
	
	printf("1+2+3+����+99+100=%d\n",s);
}
