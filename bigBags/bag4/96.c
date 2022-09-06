/*
* 文件标识：练习………中间加了个输出函数，发现单词长度（从0开始）少了一位，
                        从1开始又会出bug：长度为零的字符串会出错！！！！……遗憾……待改进………
* 摘    要：输入一行字符串，可以带空格和标点，输出最长的单词——函数实现
*/  
#include <stdio.h>
#include <string.h>

/*判断当前字符是否字母，若是则返回1，否则返回0*/
int alphabetic(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		return 1;
	} else {
		return 0;
	}
}

void printWord(char *p){
	while(*p != ' ' && *p != '\0'){
		putchar(*p++);
	}
}

/* 寻找最长单词的起始位置 */
/*
是字母且flag==1 重新开始开始记录长度，并flag==0; 
	字母且 flag==0，则开始计数器+1
不是字母，则flag==1，判断，如果是最长，则记录 最长值，最长起始点。
*/
// its book is missing yestoday
int getLongestStart(char string[]) {
	int counter = 0, //单词长度计数器

		maxLength = 0, //最长单词长度
		maxStart = 0, //最长单词的起始点下标

		flag = 1, //允许记录下一个单词的起点
		curStart=0; //当前单词起始点下标

	// 不加(int)会出现警告,返回值不相同: C11正常。
	// 必须加 <=，因为最后的\0 有助于判断最后一个单词是否是最长的。
	//    单词后的第一个非字母字符才判断长度
	for (int i=0; i <= strlen(string); i++) {  
		if (1 == alphabetic(string[i])) { //如果是字符
			if (1 == flag) {
				curStart = i; //记录当前正在判断的单词首字母位置
				flag = 0;  //终止记录当前单词起始位置
				counter = 1; //单词长度计数器 清零
			} else {
				counter++;
			}
		} else { //如果不是字母，即遇到了空格或标点符号，表示一个单词结束
			flag = 1;  //允许记录下一个单词起始位置
			if (counter > maxLength){ //判断刚判断的单词是否最长
				maxLength = counter; 
				maxStart = curStart;
				printf(">>[%d] maxLength：%d, \tmaxStart:%d, \tstring:",
						i, counter, curStart); // 调试用
				printWord( (string+i-maxLength) );
				putchar('\n');
			}
		}
	}//end of: for (i=0; i<=strlen(string); i++)
	
	return (maxStart);//返回最长的单词首字母位置
}


void main() {
	int i;
	char line[101] = {'\0' };

	printf("Input one line, at most 100 chars:\n");
	gets(line);
	int startIndex=getLongestStart(line);
	
	printf("\n--> the longest word in: %s\n", line);
	//i的起始是最长单词的首字母，一直到下一个不是字母的符号结束循环
	for (i=startIndex; alphabetic(line[i]); i++)	{
		printf("%c", line[i]);
	}

	printf("\n");
}