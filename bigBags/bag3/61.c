#include <stdio.h>
//求1000以内的 完数 ：所有的因子的和等于它自身。如6=1+2+3
void method1(){
	printf("Method1:\n");
	int m,i,sum;
	for(m=2;m<1000;m++)
	{
		sum=0;
		for(i=1;i<m;i++)
			if(m%i==0) sum+=i;

		if(sum==m)
		{
			printf("%d是一个“完数”，它的因子是：",m);
			for(i=1;i<m;i++)
				if(m%i==0) printf("%d, ",i);
			printf("\n");
		}
	}
}

//记录因子
void method2(){
	int a[50],i,j,k,sum;
	int n;
	for(i=2; i<=1000; i++)
	{
		sum=0;k=0;
		//求因子
		for(j=1;j<i;j++)
		{
			if(!(i%j)) //余数为0，是因子
			{
				a[k]=j;
				sum+=j;
				k++;
			}
		}
		
		if(sum==i)
		{
			printf("%d,It's facters are: ",i);
			
			// 输出方法1
			while(k-->0) //这里k--与--k的结果不同
				printf("%d  ",a[k]);
			
			// 输出方法2
			//for(n=0;n<k;n++)
			//	printf("%d, ",a[n]);
			
			printf("\n");
		}
	}
}

void main(){
	//method1();
	method2();
	printf("\n");
}