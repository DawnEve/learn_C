/*
****************************************************************
*              �ַ���������  my_string.c
*/
int my_strlen(char *p);

void my_strcopy(char *ps_dest, char *ps_source, int m);


/*
* ����ԭ�ͣ�int my_strlen(char *p);
* ʵ�ֹ��ܣ����ַ�������
* ������ ����1�����ַ���ָ�룩;
* ����ֵ :�ַ�������;
*/
int my_strlen(char *p){
	int n = 0;
	while (*p++){
		n++;
		//p++;
	}
	return n;
}


/*
* ����ԭ�ͣ�void my_strcopy(char *ps_dest, char *ps_source, int m);
* ʵ�ֹ��ܣ��ӵڶ����ַ����ĵ�m���ַ���ʼ���Ƶ���һ���ַ���֮��
* ������ ����3����Ŀ���ַ���ָ��, Դ�ַ���ָ��, ��ʼ�����ַ�����;
* ����ֵ :��;
*/
void my_strcopy(char *ps_dest, char *ps_source, int m){
	int n = 0;
	if (my_strlen(ps_source) < m)  exit(0);
	
	while(*ps_dest != '\0'){
		*ps_dest++;
	}

	while (n<m){
		n++;
		ps_source++;
	}
	
	while (*ps_source != '\0'){
		*ps_dest++ = *ps_source++;
	}

	*ps_dest = '\0';
}