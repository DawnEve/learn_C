/*
* ժ    Ҫ������ʮ�������������ʮ��������(�û�������Ż�)
*/

#include <stdio.h>
#include <string.h>
#define MAX 1000
void main() {
	char  hexArr[MAX], c;
	int   i = 0, //16����char������±�
		flag = 0, //
		flag1 = 1; //���ƴ�ѭ������: ����ѭ��ת����ֱ������N��n
	int htoi(char s[]);

	printf("  Input a hex number, like FF, F0, then get the integer.\n");
	printf("    Quit with(N/Q)");
	printf("\n\nhex> ");
	while ((c = getchar()) != '\0' && i<MAX && flag1){
		//�ж�����ֵ�Ƿ�16��������
		if (c>='0' && c<='9' || c>='a' && c<='f' || c>='A' && c<='F') {
			flag = 1; //��ʼ��� 16�����ַ���
			hexArr[i++] = c;
		}else if (1 == flag) { //flagΪ1��ʾ�������롣else��ʾ�����Ƿ��ַ�
			printf("[len: %d] ", i); //��Чλ��
			// �ַ�����β��/0
			hexArr[i] = '\0';
			// hax to integer
			printf("decimal: %d\n", htoi(hexArr));
			
			// ��ʼ���´�����
			flag = 0;
			i = 0;
			printf("\nhex> ");

		}else{
			// �жϷǷ��ַ����˳���
			if (c == 'N' || c == 'n' || c=='Q' || c=='q'){
				flag1 = 0;
				printf("Quit\n");
			}else{
				printf("Invalid char: %c. \nPlease input again\n"); //Ϊʲô�ò�������Ƿ��ַ�?
				
				while( getchar() != '\n') continue; //���Ӻ���Ĵ�������
				
				flag = 0;
				i = 0;
				printf("\nhex> ");
			}
		}
	}
}


int htoi(char *s){
	printf("hax: %s\n", s);
	int i,n = 0;

	for (i=0; s[i] != '\0'; i++){
		if (s[i]>='0' && s[i]<='9')	{
			n = n*16 + s[i] - '0';
		}else if (s[i]>='a' && s[i]<='f'){
			n = n*16 + s[i] - 'a' + 10;
		}else if (s[i]>='A' && s[i]<='F'){
			n = n*16 + s[i] - 'A' + 10;
		}
	}

	return n;
}