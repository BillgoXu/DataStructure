/* **************
*6.6哈夫曼树的相关操作
*
****************/
#ifndef HUFFMANTREE_H
#define HUFFMANTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Status.h"
#include "Scanf.c"

/*宏定义*/
#define MAX_TREE_SIZE 100//数的最大节点

/*哈夫曼树和哈夫曼编码的类型定义*/
typedef struct
{
    unsigned int weight;//权
    unsigned int parent;
    unsigned int lchild;
    unsigned int rchild;
}HTNode;

typedef HTNode* HuffmanTree; //动态分配数组储存哈夫曼树
typedef char* HCNode;
typedef HCNode* HuffmanCode; //动态分配数组储存哈夫曼编码表

/*函数s*/
void InitTree_HT(HuffmanTree *HT);
Status CreatHuffmanTree_HT(FILE *fp,HuffmanTree *HT);
Status Select_HT(HuffmanTree HT;int end,int *order_1,int *order_2);//从1到end依次选出权值最小且未编入树的两个节点的序号order_1,order_2
Status HuffmanCodeing_HT_1(HuffmanTree *HT,HuffmanCode *HC);//逆序计算哈夫曼编码值
Status HuffmanCodeing_HT_2(HuffmanTree *HT,HuffmanCode *HC);//先序遍历计算哈夫曼编码值
void ShowHuffmanTree_HT(HuffmanTree HT);//展示哈夫曼树
void ShowHuffmanCode_HT(HuffmanTree HT,HuffmanCode HC);//打印哈夫曼编码
#endif // HUFFMANTREE_H
