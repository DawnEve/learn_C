/*
* �ļ���ʶ����ϰ�������м���˸�������������ֵ��ʳ��ȣ���0��ʼ������һλ��
                        ��1��ʼ�ֻ��bug������Ϊ����ַ�������������������ź��������Ľ�������
* ժ    Ҫ������һ���ַ��������Դ��ո�ͱ�㣬�����ĵ��ʡ�������ʵ��
*/  
#include <stdio.h>
#include <string.h>

/*�жϵ�ǰ�ַ��Ƿ���ĸ�������򷵻�1�����򷵻�0*/
int alphabetic(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		return 1;
	} else {
		return 0;
	}
}

void printWord(char *p){
	while(*p != ' ' && *p != '\0'){
		putchar(*p++);
	}
}

/* Ѱ������ʵ���ʼλ�� */
/*
����ĸ��flag==1 ���¿�ʼ��ʼ��¼���ȣ���flag==0; 
	��ĸ�� flag==0����ʼ������+1
������ĸ����flag==1���жϣ������������¼ �ֵ�����ʼ�㡣
*/
// its book is missing yestoday
int getLongestStart(char string[]) {
	int counter = 0, //���ʳ��ȼ�����

		maxLength = 0, //����ʳ���
		maxStart = 0, //����ʵ���ʼ���±�

		flag = 1, //�����¼��һ�����ʵ����
		curStart=0; //��ǰ������ʼ���±�

	// ����(int)����־���,����ֵ����ͬ: C11������
	// ����� <=����Ϊ����\0 �������ж����һ�������Ƿ�����ġ�
	//    ���ʺ�ĵ�һ������ĸ�ַ����жϳ���
	for (int i=0; i <= strlen(string); i++) {  
		if (1 == alphabetic(string[i])) { //������ַ�
			if (1 == flag) {
				curStart = i; //��¼��ǰ�����жϵĵ�������ĸλ��
				flag = 0;  //��ֹ��¼��ǰ������ʼλ��
				counter = 1; //���ʳ��ȼ����� ����
			} else {
				counter++;
			}
		} else { //���������ĸ���������˿ո������ţ���ʾһ�����ʽ���
			flag = 1;  //�����¼��һ��������ʼλ��
			if (counter > maxLength){ //�жϸ��жϵĵ����Ƿ��
				maxLength = counter; 
				maxStart = curStart;
				printf(">>[%d] maxLength��%d, \tmaxStart:%d, \tstring:",
						i, counter, curStart); // ������
				printWord( (string+i-maxLength) );
				putchar('\n');
			}
		}
	}//end of: for (i=0; i<=strlen(string); i++)
	
	return (maxStart);//������ĵ�������ĸλ��
}


void main() {
	int i;
	char line[101] = {'\0' };

	printf("Input one line, at most 100 chars:\n");
	gets(line);
	int startIndex=getLongestStart(line);
	
	printf("\n--> the longest word in: %s\n", line);
	//i����ʼ������ʵ�����ĸ��һֱ����һ��������ĸ�ķ��Ž���ѭ��
	for (i=startIndex; alphabetic(line[i]); i++)	{
		printf("%c", line[i]);
	}

	printf("\n");
}