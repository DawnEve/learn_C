#include <stdio.h>
#include <math.h>
void main()    /*˫��while()ѭ����ӡ�����ǵ�99��  */
{
	int i,j;
	i=1;
	while(i<=9)
	{
		j=1;
		/*i<=j�������ǵ�99��  */
		while(j<=i)
		{
			printf("%1dx%1d=%2d  ",j,i,i*j);
			j++;
		}
		printf("\n");
		i++;
	}
}
