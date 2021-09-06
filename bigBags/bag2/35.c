#include <stdio.h>
#include <string.h>
#define NUM 5   /*此语句我加了一个;做结尾，出错，找了半天，汗！！ */
void main()     /*交换法排序！输入五个学生的姓名和成绩，然后输出按顺序排好的姓名和相应的成绩  */
{
	int i,j;
	char name[NUM][10],stmp[10];
	float score[NUM],tmp;
	
	printf("输入五个姓名和成绩：用空格与回车分开\n");
	for(i=0;i<NUM;i++)
		scanf("%s%f",name[i],&score[i]);
	/*name[i]代表字符数组第i行的地址，所以不用&。
	但score[i]代表一个具体值，需要地址符号*/
	printf("\n");

	//交换法排序
	for(i=0;i<NUM-1;i++){
		for(j=i+1;j<NUM;j++){    /*双重循环，第i项和后面的每一项比较  */
			if(score[i]<score[j]){/*经比较，较大的成绩换到首位  */
				/*交换成绩 */
				tmp=score[i];
				score[i]=score[j];
				score[j]=tmp;
				/*交换姓名 */
				strcpy(stmp,name[i]);/*stmp是字符数组名,长度为10，用来中转存名字*/
				strcpy(name[i],name[j]);
				strcpy(name[j],stmp);
			}
		}
	}	
	printf("\n排序后为：\n");
	for(i=0;i<NUM;i++)
		printf("%10s: %3.1f\n",name[i],score[i]);
}