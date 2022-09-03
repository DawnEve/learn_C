/*
* ժ    Ҫ�� ��ŵ�����⣨��A������B�ƶ���C�� �������⡣�����ĵ�����ݹ�

a b c ��3�����ӡ�
a ���� n ��Բ�̣����µ��ϰ뾶����С��
�涨С��ֻ�ܷŵ�������棬���ܷ�������
ÿ��ֻ���ƶ�һ���̡�
��ô��a�ϵ�n��Բ�̣�����b���ƶ���c�ϣ�

˼·:  a -b-> c 
1. �������� a -c-> b
2. ����     a --> c
3. �������� b -a-> c
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

//ÿ������ÿ�ε��ö����Լ����ڴ�ռ䣬������ֻ�����Լ���

//0. ����򵥵�n=1, n=2 ��ʼ�������ÿһ������� n=3, n=4;
//1. �������������ջ��ֻ��ջ���������У����µȴ�������ѹ���������������� counter
//2. ÿ�δ��Σ��βζ���ʲô�� ����ջʱ��ӡ���� one,two,three 
//3. ÿ�� n �ĵ�ַ�Ƕ��٣�
//4. ÿ�δ�ӡ�ƶ����裬�ǵڼ�����? �̺�Խ��뾶Խ��
//5. move ���������ﱻ���õģ�ע�⣬һ��2��λ�á�
// 	https://blog.csdn.net/qq_41614928/article/details/104208022

/*hanoi*/
static int counter=0;
void hanoi(int n,char one,char two,char three) {
	//debug
	int flag=0;
	printf("\tin f(n=%d, %c,%c,%c), &n:%p, stack counter=%d\n", 
		n,one,two,three, &n, ++counter);
	
	//code
	if(n<1) return; //n������1������Ҫ��ѭ��
	if(n==1){
		move(one,three, n); //ֻ��1���̣�ֱ�� a->c ����
	}else{
		hanoi(n-1,one,three,two); //1. �����ģ�n-1���̽���c��a to b
		move(one,three, n);       //2. ���� a to c 
		hanoi(n-1,two,one,three); //3. ����a��n-1 ���� b to c
	}
	
	//debug
	printf("\t--->pop f(n=%d, %c,%c,%c), &n:%p, stack counter=%d\n", 
		n,one,two,three, &n, --counter);
}

/*move*/
void move(char x,char y, int n) {
	printf("[%d]%c->%c disk #%d\n",step++, x,y, n);	
}
