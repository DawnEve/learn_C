#include <stdio.h>
void main()  /*ð�ݷ�����������   */
{
	int a[10],i,j,k;
	printf("������10������Ԫ��,�ÿո�������س�������\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");

	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if (a[j]>a[j+1])
			{             /*���ﷸ��Ϳ����Ȼ���ˡ���ϸ�������ܼ򵥵�   */
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		
   printf("��С�����˳��Ϊ��\n");

	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	
	printf("%\n");
}



