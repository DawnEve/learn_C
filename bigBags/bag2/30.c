#include <stdio.h>
void main()  /*冒泡法给数组排序   */
{
	int a[10],i,j,k;
	printf("请输入10个数组元素,用空格隔开，回车结束：\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\n");

	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if (a[j]>a[j+1])
			{             /*这里犯糊涂，竟然错了。仔细看看，很简单的   */
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		
   printf("从小到大的顺序为：\n");

	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	
	printf("%\n");
}



