#include "stdio.h"
int main()    /*���ط�֧����ʹ��   */
{
	int x;
	printf("������ٷ��Ʒ�����");
	scanf("%d",&x);
	switch ( (int)(x/10))
	{
		case 10:
		case 9: printf("%d�֡������㣡\n",x);break;
		case 8:printf("%d�֡������ã�\n",x);break;
		case 7:printf("%d�֡����еȣ�\n",x);break;
		case 6:printf("%d�֡�������\n",x);break;
		default:printf("%d�֡���������\n",x);
	}
	return 0;
}