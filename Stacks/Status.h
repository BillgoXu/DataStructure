/********************
*FileName: Status.h
*Contents: 相关状态码
*********************/

#ifndef STATUS_H
#define STATUS_H

#define TURE        1
#define FALSE       0
#define YES         1
#define NO          0
#define OK          1
#define ERROR       0
#define SUCCESS     1
#define UNSUCCESS   0
#define INFEASIBLE  -1  //不可行
#define OVERFLOW    -2  //上溢出
#define UNDERFLOW1  -3  //下溢出

typedef int Status;

//-------宏函数---------
#define Wait(x)\
{\
    double _Loop_Num_;\
    for(_Loop_Num_=0.01;_Loop_Num_+=0.01)\
        ;\
}//设立一个空循环

#define PressEnter \
{ \
    fflush(stdin);\
    printf("Press Enter...");\
    getchar();\
    fflush(stdin);\
}//按Enter键继续

#endif
