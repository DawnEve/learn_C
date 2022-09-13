/*
* ժ    Ҫ��ָ������  ����N����ַ����������
*/

#include <stdio.h>
#include <string.h>

// ��ӡ��ά����
void print(char *p[], int len){
	printf("[");
	for(int i=0; i<len; i++){
		printf("%s ", *(p+i));
	}
	printf("]\n");
}



// �����[]���ȣ����� p[] ��һ�����飬Ԫ���� char *;
void strSort(char *p[], int len)  // �β� *p[]�Ǹ�ָ�����飬ÿ��Ԫ���д�ŵ��ǵ�ַ
{
	int i, j;
	char *temp;

	//ÿ�����ð�ݣ������ķ����
	for (i=0; i<len-1; i++){
		for (j=0; j<len-1 -i; j++) {
			printf(">>Before sorting: i=%d, j=%d ", i, j);
			print(p, len);
			if (strcmp(*(p+j), *(p+j+1)) > 0) 	{
				temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
		}
	}
}

void main() {
	char str[4][20], *p[4]; //  p[4]ָ������
	int i;

	for (i=0; i<4; i++)	{
		p[i] = str[i];
	}

	printf("Input 4 strings[0,20):\n");
	for (i=0; i<4; i++)
	{
		//scanf("%s", p[i]);
		scanf("%20s", p[i]); //��������ȣ������������������ַ�����ò��Ҳ����ȫ
		// д�ɳ������ȣ������\n֮ǰ�Ĳ���
	}

	strSort(p, sizeof(str)/sizeof(char [20]));

	printf("\n");
	printf("Now the sequence is: \n");
	for (i=0; i<4; i++)
	{
		printf("[%d] %s\n", i, p[i]);
	}
	printf("\n");
}

