#include<stdio.h>
#define STACKSIZE 100
#define DataType int
typedef struct
{
    DataType stack[STACKSIZE];
    int top;
} SeqlStack;

void initStack(SeqlStack *S){
    S->top = 0;
}

int stackEmpty(SeqlStack S){
    if(S.top == 0 ){
        return 1;
    }
    else
        return -1;
}

int getTop(SeqlStack S, DataType *e){
    if(S.top <= 0){
        return 0;
    }
    else{
        *e = S.stack[S.top -1];
        return 1;
    }
}

int pushStack(SeqlStack* S, DataType e){
    if(S->top >= STACKSIZE){
        printf("stack is full\n");
        return 0;
    }
    else{
        S->stack[S->top] = e;
        S->top++;
        return 1;
    }
}

int popStack(SeqlStack* S, DataType* e){
    if(S->top == 0){
        return 0;
    }
    else{
        *e = S->stack[S->top--];
        return 1;
    }
}
