#include <stdio.h>
void main()   /*�����ĵ��á��������������ֵ */
{
	int a,b,c;
	int max(int x,int y); //��������
	
	printf("�������������������������ֵ���ո����\n");

	scanf("%d %d %d",&a,&b,&c);
	printf("%d %d %d �����ֵΪ%d\n",a,b,c,max(max(a,b),c));
}

/*max ����*/
int max(int x,int y)
{
	int t;
	t=x>y?x:y;
	return(t);
}

