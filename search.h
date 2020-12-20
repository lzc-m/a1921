#ifndef _search_
#define _search_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#define HASHSIZE 12
#define NULLKEY 0xffffffff/2
#define N 20

//二叉查找树节点描述
typedef int DataType;
typedef struct Node {
	DataType key;
	struct Node *left;
	struct Node *right;
	struct Node *parent;
}Node,*PNode;



//typedef  int DataType;
//typedef struct HashTable; 
 struct HashTable {
	int *elem;
	int count;
};
//直接选择排序
void SelectSort(int b[], int n);/* {
	int i, j, k, m;
	for (i=0; i<n-1; i++) {
		m = a[i];
		k = i;
		for (j=i+1; j<n; j++)
		   if (a[j] < m) {
		   	  m=a[j]; k=j;
		   }
		   a[k] = a[i];
		   a[i] = m;
	}
} */

//折半查找
int BinarySearch(int b[], int n, int x);/* {
	int low = 0, high = n - 1, mid;
	while (low <= high) {
		mid = (low+high)/2;
		if (a[mid] == x)
		   return mid;
		else if (x < a[mid])
		   high = mid - 1;
		else
		   low = mid + 1;
	}
	return - 1;
} */

//折半查找的递归方法
int BSearch(int b[], int low, int high, int x);/* {
	if (low > high) return -1;       //查找失败
	int mid = (low + high) / 2;      //折半
	if (a[mid] == x)
	   return mid;                      //找到
	else if (x < a[mid])
	   return BSearch(a, low, mid-1, x);
	else
	   return BSearch(a, mid+1, high, x); 
} */

int BinarySearch2(int a[], int n, int x);/* {
	BSearch(a, 0, n-1, x); 
}*/

	   


//采用插入法创建一棵二叉查找树
void insert (PNode *root,DataType key);

void create(PNode *root, DataType *keyArray,int length);

PNode search(PNode root,DataType key);




int InitHashTable(HashTable &pHashTable);


int InsertHashTable (HashTable &pHashTable, int key);

int SearchHashTable(HashTable& pHashTable, int key, int *addr);

	 
#endif
