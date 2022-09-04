/*
* 条件编译   
#ifdef WANG  
{  }  
#endif   //调试更方便

* 摘    要：验证：m的三次方是m个连续奇数的和(条件编译 调试)  1**3=1，2**2=3+5，3**3=7+9+11 ……
*/
#include  <stdio.h>

//调试时定义，便于打印中间结果。以后在前面加上注释符号，不再显示中间打印
//#define WANG_JL  

//声明函数
int isOdd(int m);
void MyPrint(int, int);
int nOddSum(int, int);


int main(){
	int   num, flag = 1;
	
	//1. 输入整数
	printf("\tPC 最大能验证到1290\n\nm的三次方是m个连续奇数的和  1**3=1，2**2=3+5，3**3=7+9+11 ……\n");
	printf("请输入一个正整数进行验证:");
	scanf("%d", &num);

	flag = isOdd(num);

	if (1 == flag)	{
		printf("\n验证通过！\n");
	}else if (0 == flag)	{
		printf("%d未能通过验证！请重新慎重手工验证！\n", num);
	}else if (-1 == flag)	{
		printf("%d <= 0, 请输入正整数！\n", num);
	}
	return 0;
}

/* 判断  m的三次方是m个连续奇数的和，
并返回值（-1 表示输入负数，1 表示验证成功， 0 表示验证失败） */
int isOdd(int m){
	//声明 变量 与 函数
	int  i, nCube = m*m*m;

	//非法输入
	if (m <= 0) return -1;

	for (i=1; i <= nCube/m; i++){
		if (nCube == nOddSum(i, m))	{
			printf("\n%d的三次方%d = ", m, nCube);
			MyPrint(i, m);
			printf("\n");
			return 1;
		}
	}
	return 0;
}



/*用来打印验证成功的结果   式子的右边
1——1，2——3+5，3——7+9+11 ……\n   */
void MyPrint(int i, int m)
{
	int t = 1;
	printf("%d",i);

	while (t < m)
	{
		t++;
		i+=2;
		printf("+%d", i);
	}
}

/*计算并返回从i起n个连续奇数的和 */
int nOddSum(int i, int n)
{
	int sum = 0, t = 1;
	while (t <= n) {
		sum += i;
		t++;
		i+=2;
	}

	#ifdef WANG_JL   //条件编译，看中间结果
	printf("\t函数int nOddSum(int %d, int %d)中：%d\n", i, n, sum);
	#endif

	return sum;
}
