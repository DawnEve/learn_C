#include <stdio.h>
void main()   /*�����ת��  ��һ����ά���������л������õ��µĶ�ά����  */
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2],i,j;
	printf("\t�����ת��\narray a:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)    /*for(;;)�����е�";"д��"��"���´�����ã�˰��죬�Ұ���  */
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