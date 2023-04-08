#include <stdlib.h>

const int maxSize = 100;
typedef struct seqstack {
    int data[maxSize];
    int top;
} SeqStack;

int InitStack(SeqStack *stk)
{
    stk->top = 0;
    return 1;
}

int EmptyStack(SeqStack *stk)
{
    if(stk->top == 0) {
        return 1;
    }
    return 0;
}

int Push(SeqStack *stk, int data)
{
    if(stk->top == maxSize -1) {
        return 0;
    }
    stk->top++;
    stk->data[stk->top] = data;
    return 1;
}

int Pop(SeqStack *stk)
{
    if(stk->top == 0) {
        return 0;
    }
    stk->top--;
    return 1;
}

int GetTop(SeqStack *stk)
{
    if(stk->top == 0) {
        return -1;
    }
    return stk->data[stk->top];
}