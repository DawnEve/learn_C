/*
* 找到三对运动员对抗赛名单
甲队A B C;         一一对抗           乙队X Y Z;
A不和X；C不和 X Z比赛，请找到三对运动员对抗赛名单
*/
#include <stdio.h>
void main(){
	char i,j,k;
	for(i='X'; i<='Z'; i++)
		for(j='X'; j<='Z'; j++)
			if(i!=j)               //这几步较有新意
				for(k='X'; k<='Z'; k++)
					if(k!=i && k!=j)//这几步较有新意
						if(i!='X' && k!='X' && k!='Z')//逻辑转化为循环运算
							printf("A--%c\tB--%c\tC--%c\n",i,j,k);
}