/* **************
*6.6������������ز���
*
****************/
#ifndef HUFFMANTREE_H
#define HUFFMANTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Status.h"
#include "Scanf.c"

/*�궨��*/
#define MAX_TREE_SIZE 100//�������ڵ�

/*���������͹�������������Ͷ���*/
typedef struct
{
    unsigned int weight;//Ȩ
    unsigned int parent;
    unsigned int lchild;
    unsigned int rchild;
}HTNode;

typedef HTNode* HuffmanTree; //��̬�������鴢���������
typedef char* HCNode;
typedef HCNode* HuffmanCode; //��̬�������鴢������������

/*����s*/
void InitTree_HT(HuffmanTree *HT);
Status CreatHuffmanTree_HT(FILE *fp,HuffmanTree *HT);
Status Select_HT(HuffmanTree HT;int end,int *order_1,int *order_2);//��1��end����ѡ��Ȩֵ��С��δ�������������ڵ�����order_1,order_2
Status HuffmanCodeing_HT_1(HuffmanTree *HT,HuffmanCode *HC);//����������������ֵ
Status HuffmanCodeing_HT_2(HuffmanTree *HT,HuffmanCode *HC);//��������������������ֵ
void ShowHuffmanTree_HT(HuffmanTree HT);//չʾ��������
void ShowHuffmanCode_HT(HuffmanTree HT,HuffmanCode HC);//��ӡ����������
#endif // HUFFMANTREE_H
