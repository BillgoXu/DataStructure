/*
*第六章第6节(6.6)
*/
#include <stdio.h>
#include "HuffmanTree.c"

int main(int argc,char *argv[])
{
    HuffmanTree HT;
    HuffmanCode HC;
    printf("初始化哈夫曼树 HT...\n");
    {
        InitTree_HT(&HT);
        printf("\n");
    }
    PressEnter;

    printf("\n");
    {
        printf("创建哈夫曼树 HT...");
        printf("输入8个节点的权值：");
        //改了一个输入函数
        printf("\n");
    }
    PressEnter;

    printf("展示哈夫曼树 HT...\n");
    {
        ShowHuffmanTree_HT(HT);
        printf("\n");
    }
    PressEnter;

    printf("计算哈夫曼编码 HC=\n");
    ShowHuffmanCode_HT(HT,HC);
    printf("\n");
    PressEnter;
    return 0;
}
