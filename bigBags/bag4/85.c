/*
* 自定义数据类型
* 摘    要： 2、3、4位的Armstrong数（一个n位数等于其各位数的n次方之和。）
             如1634=1的4次方 +6的4次方 +3的4次方 +4的4次方）
*/

#define MIN 10        //定义搜索范围  下限
#define MAX 10000     //定义搜索范围  上限

#include <stdio.h>
void main()  
{
	int flag, i, n;
	int a, b, c, d, counter = 0;
	long sum=0;

	long power (int, int);

	printf ("\t2、3、4位的Armstrong数（一个n位数等于其各位数的n次方之和）\n \
\t如1634=1的4次方 +6的4次方 +3的4次方 +4的4次方）\n\n");

	i = MIN;//the min
	while (i < MAX)	{
		//分离各位数字
		a = i / 1000;
		b = (i - 1000 * a) / 100;
		c = (i - 1000 * a - 100 * b) / 10;
		d = i - 1000 * a - 100 * b - c * 10; //	d = i - 10 * (i / 10);
		//printf(">> the number at each place:%d %d %d %d\n", a,b,c,d);
		
		//确定是几位数字2、3、4
		flag = 4;
		if ((0 == a) && (0 != b)){
			flag = 3;
		} else if ((0 == a) && (0 == b) && (0 != c)){
			flag = 2;
		}

		//计算 其各位数的n次方之和
		n = flag;
		sum = (power(a, n) + power(b, n) + power(c, n) + power(d, n));
        //如果 一个n位数等于其各位数的n次方之和，就输出
		if (i == sum){
			printf("%d   ",i);
			counter++;
			
			//满十个就换行，结果  没到十个.
			if (counter % 10 == 0){
				printf ("\n");
			}
		}
		i++;
	}//end of while
	printf ("\n%d 到 %d 共有Armstrong数 %d 个\n\n",MIN, MAX, counter);
}


typedef int INTEGER;   //这个用来更灵活的修改  底数  的数据类型 

//计算函数，要求n是正的整数。返回x的n（正0负整数）次方
long power(INTEGER x, int n) {
	long result = (long) x;
	while (n > 1){
		result *= (long) x;
		n--;
	}
	return result;
}
