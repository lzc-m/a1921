#include "search.h"

int main() {
	PNode root = NULL;
	DataType nodeArray[11] = {15,6,18,3,7,17,20,2,4,13,9} ;
	printf("待查找数据为：\n");
	for (int i=0;i<11;i++)
	printf("%4d",nodeArray[i]);
	create(&root,nodeArray,11);
	printf("\n请输入要查找的元素的值:");
	
	DataType plocate;
	scanf("%d",&plocate);
	if(search(root,plocate) != NULL)
	printf("这些数中有你要查找的数%d\n",search(root,plocate)->key);
	else
	printf("这些数中没有你要查找的数\n");
//}
//int main() {
	HashTable HashTable;
	InitHashTable(HashTable);
	int a[10] = {4, 5, 6, 4, 8, 14, 10 , 23, 12, 16};
	for (int i=0; i<10; ++i) {
		InsertHashTable(HashTable, a[i]);
	}
	printf("待查找数据为: \n");
	for (int i=0; i<10; i++) {
		printf("%4d", a[i]);
	}
	printf("\n请输入要查找的元素的值: ");
	DataType locate;
	scanf("%d", &locate);
	int addr;
	if (!SearchHashTable(HashTable, locate, &addr))
	printf("这些数中没有你要查找的数\n");
	else
	printf("这些数中有你要查找的数，元素索引位置为:%d", addr);
//} 
 
//int main() {
	int b[N];
	srand(time(0));
	
	for (int i=0; i<N; i++)
	   b[i] = rand() % 100;
	   
	SelectSort(b, N);
	printf("排序后数据为：");
	for (int i=0; i<N; i++) printf("%d", b[i]);
	printf("\n");
	printf("请输入要查找的元素的值，查找结束按Ctrl+Z。 \n");
	
	int x;
	while(~scanf("%d", &x)) {
		int t = BinarySearch(b, N, x);
		//int t = BinarySeacher2(b, N, x);
		if(t == -1)
		   printf("没有你要找的数据！\n");
		else
		   printf("你要找的数据在第%d的位置\n", t+1);
	}
}
