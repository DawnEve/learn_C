#include<stdio.h>
#include<time.h> //time()
#include<stdlib.h> //rand()

//投色子模型，设置筛子面数 sides, 投n个色子，投m次

//1. 投一次
int rollOne(int sides){
	return rand()%sides + 1;  //原来是 [0, sides)  ==>+1==> [1, sides];
}

//2. 投n个筛子
int roll_n_dice(int dice_num, int sides){
	if(sides<2){
		printf("Need at least 2 sides, you provide: %d\n", sides);
		return -2;
	}
	if(dice_num<1){
		printf("Need at least 1 die, you provide: %d\n", dice_num);
		return -1;		
	}
	// 总和
	int total=0;
	for(int i=0; i<dice_num; i++){
		total += rollOne(sides);
	}
	return total;
}


int main(){
	int dice_num, roll;
	int sides;
	int status;
	
	srand( (unsigned int) time(0) ); //设置随机数种子
	printf("Enter the number of sides per die, 0 to stop.\n");
	while( scanf("%d", &sides)==1 && sides>0 ){
		printf("How many dice?\n");
		if( (status=scanf("%d", &dice_num))!=1 ){
			if(status == EOF){
				break; //退出循环
			}else{
				printf("You should have entered an integer.");
				printf(" Let's begin again.\n");
				while( getchar() !='\n')
					continue; //处理错误的输入
				printf("How many dice? Enter 0 to stop.\n");
				continue; //跳过以下代码，重新下一个循环
			}
		}
		roll=roll_n_dice(dice_num, sides);
		printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice_num, sides);
		printf("How many sides? 0 to stop\n");
	}
	
	printf("Good fortune to you!\n");
	return 0;
}
