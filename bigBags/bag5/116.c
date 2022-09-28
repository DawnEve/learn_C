/*
* 摘    要： 对五个整形数字排序，用 指向指针的指针。  结果说明只是指针变化了，数组并没被修改
*/

#include <stdio.h>

void sort(int **p) {
	int i, j, *temp;
    for(i=0; i<4; i++) {
		for (j=i+1; j<5; j++) {
			//这里出错了，应该为两个**才能取出结果！！
			if (**(p+i) > **(p+j)) {
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
}


int main(){
    int i;
    int num[5]= {10, -5, 35, 1, -19}, 
		**p, *pnum[5];//**p为指向指针的指针
 
    for (i=0; i<5; i++){
		pnum[i] = &num[i];       
    }

	//p = pnum; sort(p);
	sort(pnum); //和上面一行等价

	printf("numbers sorted:(用指针输出)\n");
	for (i=0; i<5; i++){
		printf("%d, ", *pnum[i]);       
    }
	printf("\n\n");
	
	printf("numbers sorted:(用数组输出)\n");
	for (i=0; i<5; i++) {
		printf("%d, ", num[i]);       
    }
	printf("\n");
	return 0;
}



