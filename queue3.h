#ifndef _queue3_
#define _queue3_

#include <stdio.h>
#include <malloc.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *left, *right;
}Deque;

//创建双端队列
Deque* createDeque();/* {
	Deque *head;
	head = (Deque*)malloc(sizeof(Deque));
	head->left = head->right = head;
	return head;
} */

//求双端队列的元素个数
int size(Deque *dq);/* {
	node *a = dq->right;
	int c = 0;
	while (a != dq) {
		c++;
		a = a->right;
	}
	return c;
} */

//判断双端队列是否为空
int empty(Deque *dq);/* {
	return dq->right == dq;
} */

//取队头元素
dataType front(Deque *dq);/* {
	if (empty(dq)) 
	return 0 ;
	return dq->right->data;
} */

//取队尾元素的值
dataType back(Deque *dq);/* {
	if (empty(dq)) 
	return 0 ;
	return dq->left->data;
} */
 

//在队头插入元素 X
void push_front(Deque *dq, dataType z);/* {
	node *s = (node*)malloc(sizeof(node));
	s->data = z;
	s->left = dq;
	s->right = dq->right;
	dq->right->left = s;
	dq->right = s; 
}*/

//在队尾插入元素X
void push_back(Deque *dq,dataType z);/* {
	node *s = (node*)malloc(sizeof(node));
	s->data = z;
	s->left = dq->left;
	s->right = dq;
	dq->left->right = s;
	dq->left = s;
}*/

//删除队头元素
void pop_front(Deque *dq);/* {
	if (empty(dq)) 
	return ;
	node *a = dq->right;
	a->right->left = dq;
	dq->right = a->right;
	free(a);
} */

//删除队尾元素
void pop_back(Deque *dq);/* {
	if (empty(dq)) 
	return;
	node *a = dq->left;
	a->left->right = dq;
	dq->left = a->left;
	free(a); 
}*/ 

//清空双端队列的所有元素
void clear(Deque *dq);/* {
	node *a, *b;
	a = dq->right;
	while (a != dq) {
		b = a;
		a = a->right;
		free(b);
	}
	dq->left = dq->right =dq; 
}*/

//输出双端队列的所有元素
void print(Deque *dq);/* {
	node *a = dq->right;
	while (a != dq) {
		printf("%d\n", a->data);
		a = a->right;
	}
	printf("\n");
} */

/*int main() {
	Deque *dq = createDeque();
	push_back(dq,80);
	push_front(dq,90);
	push_back(dq,70);
	push_front(dq,60);
	pop_back(dq);
	print(dq);
}*/
#endif
