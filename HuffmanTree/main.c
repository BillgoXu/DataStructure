/*
*�����µ�6��(6.6)
*/
#include <stdio.h>
#include "HuffmanTree.c"

int main(int argc,char *argv[])
{
    HuffmanTree HT;
    HuffmanCode HC;
    printf("��ʼ���������� HT...\n");
    {
        InitTree_HT(&HT);
        printf("\n");
    }
    PressEnter;

    printf("\n");
    {
        printf("������������ HT...");
        printf("����8���ڵ��Ȩֵ��");
        //����һ�����뺯��
        printf("\n");
    }
    PressEnter;

    printf("չʾ�������� HT...\n");
    {
        ShowHuffmanTree_HT(HT);
        printf("\n");
    }
    PressEnter;

    printf("������������� HC=\n");
    ShowHuffmanCode_HT(HT,HC);
    printf("\n");
    PressEnter;
    return 0;
}
