//动态链表: 插入和删除元素
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//定义类型，重命名类型后，以后就不需要写 struct 前缀了
typedef struct node{ //一定要有名字，用于后续的指针声明
	int sid;
	char name[20];
	struct node *next; //内部指针还是要使用 struct
} Student; //后面定义用最后这个名字


Student* CreateLink(int );//动态创建链表
void print(Student *h);
void InsertNode(Student*, Student*, int );
void DeleteNode(Student*, int );


int main(){
	Student *head;
	int N=3;
	head=CreateLink(N);
	print(head);
	
	// 插入元素
	Student *node2=(Student*)malloc(sizeof(Student));
	node2->sid=10086;
	strcpy(node2->name, "Cmcc");
	printf("input the index you want to insert, 0-based:");
	int nth;
	scanf("%d", &nth);
	InsertNode(head, node2,nth);
	print(head);
	
	// 删除元素
	printf("input delete index, 0-based:");
	scanf("%d", &nth);
	DeleteNode(head, nth);
	print(head);
	
	return 0;
}



Student* CreateLink(int N){
	int i;
	Student *head, *tmp, *pre;
	head=(Student*)malloc(sizeof(Student)); //头结点是空的
	pre=head;
	printf("input %d student info: id name\n", N);
	for(i=0; i<N; i++){
		tmp=(Student*)malloc(sizeof(Student));
		scanf("%d %s", &(tmp->sid), tmp->name );
		pre->next=tmp;
		pre=tmp;
	}
	pre->next=NULL; //最后一个节点没有后继
	return head;
}

// 打印函数
void print(Student *h){
	printf("stu linked list:\n");
	while(h->next != NULL){
		h=h->next;
		printf("  %d %s ->%p\n", 
			h->sid, h->name, h->next);
	}
}


// 插入元素,n表示第几个位置插入元素，0-based
void InsertNode(Student *h, Student *newNode, int nth){
	int i=0;
	while(h->next != NULL){
		if(i==nth){
			newNode->next = h->next;
			h->next = newNode;
		}
		i++;
		h=h->next;
	}
	// 如果是最后一个元素
	if(i==nth){
		newNode->next = h->next;
		h->next = newNode;
	}else if(i<nth){
		printf("Warning: Insert failed!\n");
	}
}

// 删除第nth个元素
void DeleteNode(Student *h, int nth){
	int i=0, flag=0;
	Student *pre;
	while(h->next != NULL){
		pre=h;
		h=h->next;
		if(i==nth){
			pre->next = h->next;
			free(h); //释放当前节点的内存
			h=pre->next;
			
			flag=1;
			break;
		}
		i++;
	}
	if(0==flag){
		printf("warning: delete failed!\n");
	}
}