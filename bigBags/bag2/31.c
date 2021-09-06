#include <stdio.h>
void main()   /*矩阵的转置  将一个二维数组行与列互换，得到新的二维矩阵  */
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2],i,j;
	printf("\t矩阵的转置\narray a:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)    /*for(;;)括号中的";"写成"，"导致错误，迷茫了半天，惨啊！  */
		{
			printf("%5d",a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	}

	printf("\narray b:\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("%5d",b[i][j]);
		printf("\n");
	}
}