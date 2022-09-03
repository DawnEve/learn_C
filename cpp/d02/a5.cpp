#include<iostream>
using namespace std;

//指针与多维数组
int main(){
	int zippo[4][2]={
		{1,2},
		{10,20},
		{100,200},
		{1000,2000},
	}; //可以按结合性从内到外外理解:
		// zippo[4] 是一个4元素数组
		// 每个数组的元素是一个2元素int数组: int [2]
	// zippo 转为指针时，指向的是第一个元素，也即是 &zippo[0]
	
	//输出数组
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++){
			cout << "\t" << zippo[i][j] <<" (" << &zippo[i][j] << ")" << "\t";
		}
		cout << endl;
	}
	
	
	cout << "addr:" << zippo << ", " << &zippo[0] <<", " << &zippo[0][0] << endl;
	cout << "size:" << sizeof(zippo) << ", " <<  sizeof(zippo[0]) << ", " << sizeof(zippo[0][0]) << endl;
	cout << "size:" << sizeof(zippo) << ", " <<  sizeof(*zippo) << ", " << sizeof(**zippo) << endl;
	cout << endl;
	//小结: sizeof 是给出的总长度
	// 数组一个元素int是4位，一维数组 int[2] 是8位，二维数组 int[4][2] 是 32位
	// 使用 *zippo 和 zippo[0] 的地址是一样的，都算一种解引用方式。
	printf("zippo[2][1]=%d, *(*(zippo+2)+1)=%d\n", zippo[2][1], *(*(zippo+2)+1));
	
	//用指针，输出元素地址和值，以及加1后的地址和值
	printf("       zippo:%p,        zippo+1:%p\n", zippo, zippo+1);
	printf("    zippo[0]:%p,     zippo[0]+1:%p\n", zippo[0], zippo[0]+1);
	printf("      *zippo:%p,       *zippo+1:%p\n", *zippo, *zippo+1);
	printf("&zippo[0][0]:%p, &zippo[0][0]+1:%p\n", &zippo[0][0], &zippo[0][0]+1);
	printf("    &**zippo:%p,     &**zippo+1:%p\n", &**zippo, &**zippo+1);
	/*
	小结: 
	* 二维数组名 当做指针，+1是 8位，就是它的一个元素( int[2])
	* 而它的首元素(一维数组名) 当做指针，相当于被接引用一次，
		+1是4位，就是它的一个子元素(int)
	* 数组 当做指针，就是指向其第一个元素的指针。
		所以指向二维数组的指针，就是指向 int[2] 的指针
	*/
	int *pA[2] = { //由于[]优先级高于 *, 所以从内到外理解: 
	// pA[2] 是一个2元素数组，前面*表示元素是指针， 最左边是 int表明指向int。
		&(zippo[0][1]), //2
		&zippo[2][1]  //100
	};
	printf("*pA[0]=%d, *pA[1]=%d\n", *pA[0], *pA[1]);
	
	int (*pArr)[2]=zippo;
	printf("pArr[1][0]=%d, zippo[1][0]=%d\n", pArr[1][0], zippo[1][0]);
		
	return 0;
}