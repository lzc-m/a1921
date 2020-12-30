#include "hfmtree1.h"
void CreateHT(HTNode ht[],int n){
	int i, j, k;
	int lnode, rnode;//lnode存放最小权值节点的位置，rnode存放权值次小节点位置
	double min1, min2;//min1存放最小权值，min2存放次小权值

	for (i = 0; i < 2 * n - 1; i++)//初始化所有相关节点域为-1
		ht[i].parent = ht[i].lchild = ht[i].rchild = -1;

	//第一层循环，第一次遍历[0]到[n-1]个元素（所有待构造的节点存放在这段区间）
	//每次循环会产生一个新的节点，所以每次循环结束后i++，
	for (i = n; i < 2 * n - 1; i++) {
		min1 = min2 = 32767;//初始化
		lnode = rnode = -1;//初始化

		//第二层循环，第一次遍历[0]到[n-1]个元素找到两个最小权值节点并以此构造新节点，插入到末尾
		for (k = 0; k <= i - 1; k++) 
		{
			if (ht[k].parent == -1) 
			{//只在尚未构造二叉树的节点中查找

				if (ht[k].weight < min1) 
				{//当k点权值小于保存最小权值的点的值时
					min2 = min1;
					rnode = lnode;//将最小权值点赋值给次小权值点
					min1 = ht[k].weight;
					lnode = k;//将k点赋值为最小权值点
				}
				else if (ht[k].weight < min2) 
				{//当k点权值大于min1,小于min2时
					min2 = ht[k].weight;
					rnode = k;
				}
			}
			
		}
		//用两个最小节点创建新节点，该新节点将在下一次循环参与比较
		ht[i].weight = ht[lnode].weight + ht[rnode].weight;//为新节点设置权值
		ht[i].lchild = lnode;//设置其左右孩子节点
		ht[i].rchild = rnode;
		ht[lnode].parent = i;//设置当前两最小节点的双亲节点
		ht[rnode].parent = i;

	}

}

