#include <stdio.h>
#include <math.h>
void main()    /*˫��forѭ����ӡ�����ǵ�99��  */
{
	int i,j;
	for(i=1;i<=9;i++)
	{
	  for(j=1;j<=9;j++)
		 /*i<=j�������ǵ�99��  */
	     if(i>=j) 
			 printf("%1dx%1d=%2d  ",j,i,i*j);
	  printf("\n");
	}
}