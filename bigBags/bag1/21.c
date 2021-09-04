#include <stdio.h>
#include <math.h>
void main()    /*双重while()循环打印下三角的99表  */
{
	int i,j;
	i=1;
	while(i<=9)
	{
		j=1;
		/*i<=j是上三角的99表  */
		while(j<=i)
		{
			printf("%1dx%1d=%2d  ",j,i,i*j);
			j++;
		}
		printf("\n");
		i++;
	}
}
