#include <stdio.h>
#include <math.h>
void main()    /*双重for循环打印下三角的99表  */
{
	int i,j;
	for(i=1;i<=9;i++)
	{
	  for(j=1;j<=9;j++)
		 /*i<=j是上三角的99表  */
	     if(i>=j) 
			 printf("%1dx%1d=%2d  ",j,i,i*j);
	  printf("\n");
	}
}