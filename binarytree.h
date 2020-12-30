#ifndef _binarytree_
#define _binarytree_

#include <stdio.h>
#include <malloc.h>
#define MaxSize 100

typedef char dataType;
struct TreeNode {
	dataType data;
	TreeNode *left,*right;
};

//创建二叉树
//以先序序列输入各节点的数据。某节点的左子树或右子树为空时，输入一个特定的值X
void CreateTree(TreeNode *&t, dataType x);

//以先序遍历二叉树
void PreOrder(TreeNode *t);

//以中序遍历二叉树
void InOrder(TreeNode *t);

//后序遍历二叉树
void PostOrder(TreeNode *t);

//以层次顺序遍历二叉树
void LevelOrder(TreeNode *t);
#endif

