#include <stdio.h>
//#include <string.h>
void main()  /*strcat�������ܵ�ʵ��  */
{
	char str1[80],str2[80];
	int i=0,j=0;
	puts("���������ַ�����");
	gets(str1);
	gets(str2);

	/*�ҵ���һ���Ľ�����־ ��Ҳ������strlen()����ʵ��*/
	while(str1[i]!='\0')
		i++;  

	while( (str1[i++]=str2[j++]) != '\0' );  /*###�ܾ�����###�ѵڶ���Ԫ�����θ�����һ������*/
	printf("���Ϊ��%s\n",str1);
}

/*######��һ�л�������������
while(str2[j]!='\0'){
	str1[i]=str2[j];
	i++;
	j++;
}
str1[i]='\0';  
*/