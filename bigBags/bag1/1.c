#include "stdio.h"
int main()    /*开关分支语句的使用   */
{
	int x;
	printf("请输入百分制分数：");
	scanf("%d",&x);
	switch ( (int)(x/10))
	{
		case 10:
		case 9: printf("%d分——优秀！\n",x);break;
		case 8:printf("%d分——良好！\n",x);break;
		case 7:printf("%d分——中等！\n",x);break;
		case 6:printf("%d分——及格！\n",x);break;
		default:printf("%d分——不及格！\n",x);
	}
	return 0;
}