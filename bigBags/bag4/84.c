/*
* ժ    Ҫ�� ��Ǯ��ټ�����  �������⡪����ٷ�
���� 5 Ǯ
ĸ�� 3 Ǯ
С�� 1/3 Ǯ
�ʣ�100��Ǯ������100ֻ�������������򷨣�
*/

#include <stdio.h>
void main() {
	int cocks, hens, chicks;
	printf("������\tĸ����\tС����\n");

	for (cocks = 0; cocks < 20; cocks++)
		for (hens = 0; hens < 34; hens++) {
			chicks = 100 - cocks - hens;
			
			//&&ǰ��һ��Ҳ�����٣����򣬾ͻ���ֽ��ƺ�ķǷ���
			if ((chicks % 3 ==0) && (5*cocks + 3*hens + chicks / 3 == 100))
				printf("%d\t%d\t%d\n", cocks, hens, chicks);
		}
	printf("\n");
}
