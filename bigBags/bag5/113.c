/*
* ժ    Ҫ�� ����ַ����е���������  ָ��
*/

#include <stdio.h>
#include <string.h>

//�Ƿ�������
int isNumber(char *p){
	return ((*p >= '0') && (*p <= '9'))? 1 : 0;
}

//�����ַ�ת��Ϊ��������
int StrToNum(char *p, int n){
	int sum = 0, temp;
	while (n > 0){
		temp = *p - '0';
		sum = 10*sum + temp;
		n--;
		p++;
	}

	return sum;
}

// һ����ȫ�����뺯����ָ���ַ�ָ�룬ָ�����ȡ�
void my_gets(char *str, int len){
	char *p=str;
	int i=0;
	while( (*p = getchar()) !='\0' && i< len-1){
		// �����س����������ȡ
		if(*p == '\n')
			break;
		i++;
		p++;
	}
	*p='\0';
}

//������ ���������
void main() {
/*	char a[] = "a122321";
	printf("%d",StrToNum(a+1,6));
}*/

	char str[50], *pstr;
	int a[30], *pa, i, j, n;
	i = 0; //���ַ������ַ�λ��
	j = 0; //���������ַ�����
	n = 0; //��������

	pstr = str;
	pa = a;

	//���뺬�����ֵ��ַ���
	printf("�����뺬�����ֵ��ַ�����[1, 50)λ��\n");
	//gets(str); //����ȫ���޷�����ȷ���ĳ���
	my_gets(str, sizeof(str)/sizeof(char));
	
	printf("len: %d, str: %s\n", strlen(str), str);

	while (*(pstr + i) != '\0')	{
		if (1 == isNumber(pstr + i)) {
			j++;
		}else if (j>0) {
			*pa = StrToNum((pstr+i-j), j);
			pa++;
			j = 0;
			n++;
		}
		i++;
	}

	// ���ֽ������ַ��������
	if ((*(pstr + i) == '\0') && (j>0)) {
		*pa = StrToNum((pstr+i-j), j);
		n++;
	}


	// ���
	printf("\n�ַ����й���%d�����֣�\n", n);
	for (i=0; i<n; i++)	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}
