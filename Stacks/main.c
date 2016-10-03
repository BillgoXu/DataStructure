#include <stdio.h>
#include "SequenceStack.h"


void Conversion(int i);         //进制转换函数
int main(int argc, char **argv)
{
    int n;
    printf("请输入一个非负十进制整数:");
    scanf("%d",&n);
    Conversion(n);
    printf("\n\n");
    return 0;
}


void Conversion(int i){
    SqStack S;
    SElemType e;

    InitStack(&S);
    printf("十进制%d转化为八进制后是:0",i);
    while(i){
        Push(&S,i%8);
        i/=8;
    }
    while(!StackIsEmpty(S)){
        Pop(&S,&e);
        printf("%d",e);
    }
}
