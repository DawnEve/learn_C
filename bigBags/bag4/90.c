/*
* ժ    Ҫ�� �ֵ�˳���������ַ����顭���õ��ַ�����
*/

#include <stdio.h>
#include <string.h>
#define _STRING_LEN_ 20

/** ��ӡ�ַ�������: ������Ϊ���������ݵ�ֻ����ָ�������ָ�룬����ָ��Ҫ��Բ����
* ��һ��������һ��ָ�룬ָ��ԭ����ĵ�һ��Ԫ�� / ��ʧ��ԭ��������ά��
* �ڶ�����������ԭ��������ά
*/
void print(char (*pchar)[_STRING_LEN_], int n){
	for(int i=0; i<n; i++){
		printf("[%d] %s\n", i, pchar[i]);
	}
}

void main(){
	int i, j;
	char temp[_STRING_LEN_]; //֮ǰ����Ϊ10����Ϊjsȫ������10��û��Ϊ/R���ռ䣬�����ַ�����ӡ����
	char  str[][_STRING_LEN_] = {"Visual C","Pascal","Basic","Fortran", "Java", "Python", "JavaScript", "R"};
	int len=sizeof(str) / sizeof( char[_STRING_LEN_] );
	printf("len of arr: %d\n", len);

	//1. print
	printf("\nBefore sort:\n");
	print(str, len);

	//2. sort
    for (i=0; i<len-1; i++){
		for (j = i+1; j<len; j++) {
			if (strcmp(str[j], str[i]) < 0) {
				strcpy(temp,str[i]);
      	        strcpy(str[i],str[j]);
      	        strcpy(str[j],temp);
			}
		}
	}

	//3. check
	printf("\nAfter sort:\n");
	print(str, len);
}
