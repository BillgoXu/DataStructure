/****************************
*FileName: SequenceStack.c
*Contents: 顺序栈相关函数实现
*****************************/

#ifndef SEQUENCESTACK_C
#define SEQUENCESTACK_C

#include "SequenceStack.h"

Status InitStack(SqStack *S){
    (*S).base = (SElemType *)malloc(STACK_INIT_SIZE*sizeof(SElemType));
    if(!(*S).base)
        exit(OVERFLOW);

    (*S).top = (*S).base;
    (*S).stacksize = STACK_INIT_SIZE;

    return OK;
}// InitStack


Status DestroyStack(SqStack *S){
    free((*S).base);

    (*S).base = NULL;
    (*S).top  = NULL;
    (*S).stacksize = 0;

    return OK;
}//DestroyStack


Status ClearStack(SqStack *S){
    (*S).top = (*S).base;

    return OK;
}//ClearStack


Status StackIsEmpty(SqStack S){
    if(S.base==S.top)
        return TURE;
    else
        return FALSE;
}//StackIsEmpty

int StackLenth(SqStack S){
    return S.top-S.base;
}//StackLenth


Status GetTop(SqStack S,SElemType *e){
    if(S.top==S.base)
        return ERROR;
    *e = *(S.top - 1);

    return OK;
}//GetTop


Status Push(SqStack *S,SElemType e){
    if((*S).top - (*S).base>=(*S).stacksize){
        (*S).base = (SElemType *)realloc((*S).base,((*S).stacksize+STACKINCREMRNT)*sizeof(SElemType));
        if(!(*S).base)
            exit(OVERFLOW);
        (*S).top = (*S).base + (*S).stacksize;
        (*S).stacksize += STACKINCREMRNT;
    }//栈满追加储存空间

    *(S->top) = e;  //栈顶元素赋值
    (S->top)++;     //栈顶指针自增

    return OK;
}//Push,出栈.

Status Pop(SqStack *S,SElemType *e){
    if((*S).top==(*S).base)
        return ERROR;
    (*S).top--;     //弹栈,指针先递减再赋值.
    *e = *((*S).top);

    return OK;
}//pop,弹栈.

void StackTraverse(SqStack S, void(Visit)(SElemType)){
    SElemType *p = S.base;

    while(p<S.top)
        Visit(*p++);

    return ;
}//StackTraverse


#endif
