/*
* �ļ���ʶ����ϰ�������������ڼ��͵ڼ�����ô���������������
* ժ    Ҫ�����������գ��������һ��ĵڼ���: �����ⲿ���顣���ڼ��͵ڼ�����ô�����
*/

#include <stdio.h>


/*���꺯���� �ж��Ƿ����ꡣ�� ����1�����ǣ�����0*/
int leap(int year){
	return ( (year%4 == 0 && year%100 != 0)  ||  (year%400 == 0));
}

/*�������ⲿ���飡������һ������·ݵ����������е�һ��Ԫ�ز�Ҫ  */
int day_tab[13] = {0,  31, 28, 31, 
                       30, 31, 30, 
					   31, 31, 30, 
					   31, 30, 31};

/*����������������֮ǰ������   */
int sum_day(int month, int day){
	for (int i=1; i<month; i++)	{
		day += day_tab[i];
	}

	return (day);
}

void main() {
	int year, month, day, days;

	printf("\n>Input date(year, month, day):");
	scanf("%d,%d,%d",&year, &month, &day);

	days = sum_day(month, day);//����һ����������
	if (month >=3 && leap(year))//��������������������
	{
		days++;
	}
	
	printf("%d/%d/%d is the %dth day of this year.\n",year, month, day, days);
}