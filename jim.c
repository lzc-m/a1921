#include <stdio.h>
#include <stdlib.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode;
int main(){
	int num;
	printf("请输入总数:");
			scanf("%d",&num);

			LNode *L, *p, *s;
			int n= num;
			L=(LNode *)malloc(sizeof(LNode));
			L->next=NULL;
			while(n>0){
			p=(LNode *)malloc(sizeof(LNode));
			p->data=n;
			if(n==num)
			s=p;
			p->next=L->next;
			L->next=p;
			n--;
			}
			s->next=L->next;

			int count=1;
			int num2;
			printf("请输入报数的数字:");
			scanf("%d",&num2);
			do{
				s=p;
				p=p->next;
				count++;
				if(count==num2){
					s->next=p->next;
					free(p);
					p=s->next;
					count=1;
				}
			}while(s->next!=s);
			printf("获胜者为:%d",s->data);
			return 0;
}

