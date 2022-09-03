/*
* 摘    要： 汉诺塔问题（从A借助于B移动到C） 经典问题。函数的调用与递归

a b c 共3个柱子。
a 上有 n 个圆盘，从下到上半径逐步缩小。
规定小的只能放到大的上面，不能反过来。
每次只能移动一个盘。
怎么把a上的n个圆盘，借助b都移动到c上？

思路:  a -b-> c 
1. 除了最大的 a -c-> b
2. 最大的     a --> c
3. 除了最大的 b -a-> c
*/
#include <stdio.h>

void move(char, char, int);
void hanoi(int ,char, char, char);
static int step=1;

void main() {
	void hanoi(int n, char one, char two, char three);
	int m;

	printf("Input the number of diskes:");
	scanf("%d",&m);

	printf("The steps of moving %d diskes from A to C:\n",m);
	hanoi(m,'A','B','C');
}

//每个函数每次调用都有自己的内存空间，变量都只属于自己。

//0. 从最简单的n=1, n=2 开始，搞清楚每一步，最后 n=3, n=4;
//1. 搞清楚进出几次栈？只有栈顶的在运行，底下等待。底下压几个函数？计数器 counter
//2. 每次传参，形参都是什么？ 进出栈时打印出来 one,two,three 
//3. 每次 n 的地址是多少？
//4. 每次打印移动步骤，是第几个盘? 盘号越大半径越大。
//5. move 都是在哪里被调用的？注意，一共2个位置。
// 	https://blog.csdn.net/qq_41614928/article/details/104208022

/*hanoi*/
static int counter=0;
void hanoi(int n,char one,char two,char three) {
	//debug
	int flag=0;
	printf("\tin f(n=%d, %c,%c,%c), &n:%p, stack counter=%d\n", 
		n,one,two,three, &n, ++counter);
	
	//code
	if(n<1) return; //n至少是1，否则要死循环
	if(n==1){
		move(one,three, n); //只有1个盘，直接 a->c 结束
	}else{
		hanoi(n-1,one,three,two); //1. 除最大的，n-1个盘借助c，a to b
		move(one,three, n);       //2. 最大的 a to c 
		hanoi(n-1,two,one,three); //3. 借助a，n-1 个盘 b to c
	}
	
	//debug
	printf("\t--->pop f(n=%d, %c,%c,%c), &n:%p, stack counter=%d\n", 
		n,one,two,three, &n, --counter);
}

/*move*/
void move(char x,char y, int n) {
	printf("[%d]%c->%c disk #%d\n",step++, x,y, n);	
}
