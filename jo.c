#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define INIT_SIZE 100
typedef int dataType;
typedef struct {
		dataType *data;
			int size;
				int maxSize;
} SqList;
//初始化顺序表
void InitList(SqList *l) {
	l->data = (dataType*)malloc(INIT_SIZE * sizeof(dataType));
		l->size = 0;
			l->maxSize = INIT_SIZE;
			}
//在顺序表第l的第k个位置插入元素x
void Insert(SqList *l, int k, dataType x) {
	if (k<1 || k>l->size+1) exit(1);
		if (l->size == l->maxSize) exit(1);
			for (int i=l->size; i>=k; i--)
				l->data[i] = l->data[i-1];
					l->data[k-1] = x;
                                        l->size++;
						}
//删除顺序表l的第k个元素
void Delete(SqList *l, int k) {
	if (k<1 || k>l->size) exit(1);
		for (int i=k; i<l->size; i++)
			l->data[i-1] = l->data[i];
				l->size--;
				}
//判断顺序表是否为空
int Empty(SqList *l) {
	return l->size == 0;
	}
//判断顺序表是否为满
int Full(SqList *l) {
	return l->size == l->maxSize;
	} 
//求顺序表l中第i个元素的值
dataType GetData(SqList *l, int i) {
	if (i<1 || i>l->size) exit(1);
		return l->data[i-1];
		}
//在顺序表l中查找值为x的元素
int locate(SqList *l, dataType x) {
	for (int i=0; i<l->size; i++)
		if (l->data[i] == x)
			return i + 1;
				return 0;
}
//输出顺序表
void Print(SqList *l) {
	for (int i=0; i<l->size; i++)
	printf("%d ", l->data[i]);
	printf("\n");
			} 
int main() {
	SqList list, *pList=&list;
	InitList(pList);
	Insert(pList, 1, 10);
	Insert(pList, 1, 20);
	Delete(pList, 2);
	Insert(pList, 1, 30);
	Insert(pList, 1, 40);
	Print(pList);
	printf("%d",GetData(pList, 2)); 
	}
