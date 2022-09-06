/*
* 文件标识：练习……………星期几和第几周怎么解决？？？………
* 摘    要：给出年月日，计算出是一年的第几天: 用了外部数组。星期几和第几周怎么解决？
*/

#include <stdio.h>


/*闰年函数： 判断是否闰年。是 返回1；不是，返回0*/
int leap(int year){
	return ( (year%4 == 0 && year%100 != 0)  ||  (year%400 == 0));
}

/*定义了外部数组！！保存一年各个月份的天数。其中第一个元素不要  */
int day_tab[13] = {0,  31, 28, 31, 
                       30, 31, 30, 
					   31, 31, 30, 
					   31, 30, 31};

/*函数，计算所在月之前的天数   */
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

	days = sum_day(month, day);//函数一，计算天数
	if (month >=3 && leap(year))//函数二，考虑闰年问题
	{
		days++;
	}
	
	printf("%d/%d/%d is the %dth day of this year.\n",year, month, day, days);
}