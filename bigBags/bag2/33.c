#include <stdio.h>
#include <string.h>/*���ַ�������ʱҪ�����ͷ�ļ�������  */
void main()  /*�����ַ�������-�Ƚϣ����������ӣ�����Сд���󳤶�  */
{   
	char a[50]="The World is Big!", b[18];

	puts(a);   /*������ ����ַ���������*/
	printf("%s\n",a);/*������ͬ  */
	printf("\n");

	strcpy(b,a);/*strcpy(�ַ�����1���ַ�����2/�ַ���)������ �����ַ���/�ַ����� ���ַ���1.��ͬ��������/0*/
	puts(b);   /*������ ����ַ���������*/
	printf("\n");

	strcat(a,"I want to travel and view.");  /*���ӵڶ������� ����һ���ַ�����\0ǰ���ַ���  */
    puts(a);
	printf("\n");

	if(strcmp(a,b)>0)
		printf("a����b\n");

	printf("strcmp(a,b) : %d\n",strcmp(a,b));  /*ԭ������ֵ��1  */

	printf("�ַ���b�ĳ���Ϊ%d\n",strlen(b));  /*���ַ������ȵĺ���  */

	puts(strlwr(b));  /*�ַ�����Сд��ĸ  */
	puts(strupr(b));  /*�ַ������д��ĸ  */
}