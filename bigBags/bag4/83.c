/*
* ժ    Ҫ������ʵ��x��n����0���������η�
*/

#include <stdio.h>
int main() {
	float x;
	double z;
	int    n;
	double power(float x, int n);
//	float js(float x, int n);  //����ֻ��Ҫ����ֱ��ʹ�õĺ������ɣ�����õ��Ŀ��Բ�д

	printf("���������(float)��");
	scanf("%f", &x);

	printf("������ָ��(int)��");
	scanf("%d", &n);

	z = power(x, n);

	printf("\n%5.2f��%d�η���%f\n", x, n, z);
	return 0;
}

/*
* ����ԭ�ͣ�float power(float x, int n);
* ʵ�ֹ��ܣ�����x��n����0���������η�
* ������ ����2���������� ����ָ����;
* ����ֵ :x��n����0���������η�
* �������ۣ��ֱܷ��� nΪ-   0   +���������������0��0�η�����Ϊ��0�����ף�����ʱҲû�� 
*/
double power(float x, int n){
	double _power(float, int);
	double z=x;
	
	if (0 == n)  return 1; //��0��0�η�Ҳ˳�㶨��Ϊ��0�����ף�����ʱҲû��������
	else if (n > 0) return (_power(x, n));
	else if (n < 0) return (1/(_power(x, -n)));
}

//���㺯����Ҫ��n����������������x��n����0���������η�
double _power(float x, int n){
	double result = x;
	while (n > 1){
		result *= x;
		n--;
	}
	return result;
}