#include <stdio.h>
void main()  //����һ���ַ����ֱ�ͳ��Ӣ����ĸ���ո����ֺ������ַ��ĸ���
{
	char c;
	int letter=0, space=0, digit=0, other=0;
	printf("����һ���ַ����ֱ�ͳ��Ӣ����ĸ���ո����ֺ������ַ��ĸ���:\n");
	
	/*������һ����ʵ�����������룬���������ܻ����Ͻ����ʵa[100]   */
	while( (c=getchar())!='\n' ) //��ͳ�ƻس�������ʼ�Ĵ��󣺰�\nд����\0��������벻����ֹ
	{
		if(c>='a' && c<='z' || c>='A' && c<='Z') letter++;
        else if(c==' ') space++;
        else if(c>='0' && c<='9') digit++;
        else other++;
	}
	printf("\nӢ����ĸ����:%d,  �ո����:%d,  ���ָ���:%d,  �����ַ�����:%d\n", letter, space, digit, other);
}