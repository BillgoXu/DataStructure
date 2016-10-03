/*************************************
*FileName: SequenceStack.h
*Contents: 栈的顺序储存表示以及顺序栈的
*          基本操作函数原形说明
*************************************/
#ifndef SEQUENCESTACK_H
#define SEQUENCESTACK_H

#include <stdio.h>
#include <stdlib.h>
#include "Status.h"

#define STACK_INIT_SIZE 100 //顺序栈储存空间初始分配量
#define STACKINCREMRNT  10  //顺序栈储存空间分配增量

typedef int SElemType;//定义元素类型


typedef struct{
    SElemType *base;    //在栈的构造之前和销毁之后,base的值为NULL
    SElemType *top;     //栈顶指针
    int stacksize;      //当前已分配的储存空间,元素为单位
}SqStack;
//顺序栈的表示

Status InitStack    (SqStack *S);
    //构造一空栈e
Status DestroyStack (SqStack *S);
    //销毁栈S,S不在存在
Status ClearStack   (SqStack *S);
    //把S置为空栈
Status StackIsEmpty (SqStack S);
    //若是空栈返回TURE,否则返回FALSE
int    StackLenth   (SqStack S);
    //返回栈S的元素个数(栈的长度)
Status GetTop       (SqStack S,SElemType *e);
    //若栈不为空,则返回S的栈顶元素，并返回OK,否则返回ERROR
Status Push         (SqStack *S,SElemType e);
    //e进栈
Status Pop          (SqStack *S,SElemType *e);
    //若栈不空,则删除S的栈顶元素,用e返回其值,并返回OK,否则返回ERROR
void StackTraverse(SqStack S,void(Visit)(SElemType));
    //从栈底到栈顶依次对栈中的每个元素调用函数visit().一旦visit()失败,则操作失败
//--------基本操作函数说明--------------


#endif
