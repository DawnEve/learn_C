#include<stdio.h>
// 字符串格式符 %s

int main(){
	char fName[5], lName[15];
	printf("input First name:\n");
	int i;
	for(i=0; i<4; i++){
		scanf("%c", &fName[i]);
	}
	fName[i]='\0';
	
	printf("input Last name:\n");
	scanf("%s", lName);
	
	printf("first name/Given Name:%s\nlast name/Family Name: %s\n", fName, lName);
	return 0;
}
