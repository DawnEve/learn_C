/*
* 文件标识：练习
* 摘    要：二分法在升序数列中查找数字，函数法实现
*/

#include <stdio.h>
#define N 10
void main(){
	int a[N]={1,4,5,6,9,12,15,118,220,305};
	int num, i, q;
	int MyLook(int a[], int n, int x);

	printf("\t二分法在升序数列中查找数字\n");

    //输出数组初始值
	printf("the original array:\n");
	for(i=0; i<N; i++){
		printf("%5d",a[i]);
	}
	printf("\n");

	//大循环，查找数值
	printf("press Enter to continue...");
    while ((getchar ()) != '*'){
        //输入要查找的值
    	printf("enter the number you want to look for:(end the program with *)");
	    scanf("%d", &num);

    	//返回值为查找数的位置  0到N-1正常，-1表示没有查到
	    q = MyLook(a, N, num);
		
		//打印输出
		if (q != -1){
			printf("it is at the %dth place\n",q);
		}else{
			printf("couldn't find the number in the array!\n");
		}
		printf("\n");
	} //the end of while
}


/*
new function
* 函数原型：int MyLook(int a[], int n, int num);
* 实现功能：二分法在升序数列中查找数字
* 输入项 ：共三个（数组名， 数组元素个数， 要查找的数字）;
* 返回值 :为查找数字的位置  0到N-1正常，没有查到就返回-1;
*/
int MyLook(int a[], int n, int num){
	int low = 0, mid, up = n-1;
	
	if (num < a[0] || num > a[n-1]){
		return -1;
	}else{
		while (low <= up) {   //这里需要有=，否则有些已有的数值查不到！！
		    mid = (low + up)/2;  
			printf("=>中间值a[%d]=%d\n", mid, a[mid]); /*输出过程*/
			
	        if (num == a[mid]){
			   return mid;
			}else if (a[mid] < num){
				low = mid +1;  //这里要+1，否则可能会陷入死循环！！！！
			}else{
				up = mid -1; //这里要-1，否则可能会陷入死循环！！！！
			}
		}
	}
	return -1;
}