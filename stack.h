#ifndef _stack_
#define _stack_
//链栈的实现                                                        
#include <stdio.h>     
#include <malloc.h>
#include <string.h>
#include <stdbool.h>

                                                                                                                                                                                                                                                                                                                                                                             
typedef int dataType;                                                                                                                                                                           
typedef struct node {                                                                                                                                                                                   
dataType data;                                                                                                                                                                                  
struct node *next;                                                                                                                                                                      
}LinkStack; 
                                                                                                                                                                                                                                                                                                                                                                                    
//初始化链栈
LinkStack* InitStack();/*{
	LinkStack *t = (LinkStack*)malloc(sizeof(LinkStack));
	t->next=NULL;
	return t;
} */

//判断栈是否为空
int Empty(LinkStack *s);/*{
	return s->next == NULL;
} */

//元素x进栈 
void Push(LinkStack *s,dataType x);/*{
	node *t = (node*)malloc(sizeof(node));
	t->data =x;
	t->next =s->next;
	s->next =t;
}*/

//出栈
void POp(LinkStack *s);/*{
	if (Empty(s)) 
	return;
	node *p=s->next;
	s->next=p->next;
	free(p);
} */

//取栈顶元素的值
dataType GetTop(LinkStack *s);/*{
	return s->next->data;
} */

/*int main(){
	LinkStack *s = InitStack();
	Push(s,80);
	Push(s,90);
	POp(s);
	Push(s,70);
	printf("%d",GetTop(s));;
}*/
                                                                                                                                                                                                                                                                                                                                                                            
//栈的应用--表达式求值
/*#include <stdio.h>
#include <string.h>
#include <stdbool.h>*/

int priority(char x);/*{
	switch(x){
		case'+':
		case'-':
		case'=':
		case'*':
		case'/': return 2;
		case'(': return 3;
	}
} */
double compute(double x,double y,char op);/*{
	switch(op){
		case'+':return x+y;
		case'-':return x-y;
		case'*':return x*y;
		case'/':return x/y;
	}
}*/
/*int main1(){
	char s2[500],t[1001],op;
	double s1[500];
	int top1=-1,top2=-1;
	double x,y;
   char *fgets(t);
	for (int i=0; i<strlen(t);i++){
		if (t[i]>='0' && t[i]<='9'){
			double value =0;
			while (t[i]>='0' && t[i]<='9'){
				value=10*value + t[i]-'0';
				i++; 
			}
			if (t[i]=='.'){
				int r = 10;
				i++;
				while (t[i]>='0' && t[i]<='9'){
					value += double(t[i]-'0')/r;
					r=10 *r;
					i++; 
				}
			}
			s1[++top1]=value;
		}
		if(t[i]==')'){
			while (s2[top2]!='('){
				y=s1[top1--];
				x=s1[top1--];
				op=s2[top2--];
				s1[++top1]=compute(x,y,op);
			}
			top2--;
		}else {
			while (top2!=-1 && s2[top2]!='('
			&& priority(t[i])<=priority(s2[top2])){
				y=s1[top1--];
				x=s1[top1--];
				op=s2[top2--];
				s1[++top1]=compute(x,y,op);
			}
			s2[++top1]=t[i];
		}
	}
	printf("%.2f\n",s1[top1]);
}*/
#endif
                                                                                                                                                                                                                                                                                                                                                                                    
