/*
* ժ    Ҫ���������֣���ѯ���ڵ�Ӣ�ĵ���
*/

#include  <string.h> 
#include  <stdio.h>
const char *getWeekday(int x);

int main(){
	int n;
	printf("Please enter a number[0, 6], get weekday word:");
	scanf("%d", &n);
	
	//��ȡ����ֵ
	const char *pW = getWeekday(n);
	printf("����%d: %s\n", n, pW);

	return 0;
}

// ����һ��7Ԫ�����飬ÿ��Ԫ����һ��ָ�룬ָ��һ��char
const char *getWeekday(int x) {
	const char *pWeekday[7] = {"Sunday","Monday","Tuesday",
      	  "Wednesday","Thursday","Friday", "Saturday"};

	char arrWeekday[][10] = {"Sunday","Monday","Tuesday",
      	  "Wednesday","Thursday","Friday", "Saturday"};
	// address 
	printf("  pWeekday[1]:%p,  address of *\"good\":%p \n", pWeekday[1], "good");
	printf("arrWeekday[1]:%p\n", arrWeekday[1]);
	return pWeekday[x];
	//return arrWeekday[x];
	//warning: function returns address of local variable
}

/*
���� + ����д�� = �ҵ���⣺
1. ����7Ԫ�����飬����Ԫ�ز�ͬ��
  ��һ����ÿ��Ԫ����ָ�룬ָ��һ���ַ����飻
  �ڶ�����ÿ��Ԫ��Ҳ������
2.�ڴ�ʹ�ò�ͬ����һ���Ǿ�̬��������ֻ�����ڶ���������Ŀ��������Զ�д��
3.���޸Ĳ�ͬ����2
4���Ƿ��ܷ��ء�����������ں����ڣ���һ�����Է��أ��ڶ������ܡ�ԭ���2.
*/
