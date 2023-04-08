#include <stdio.h>
#include "SeqStack.h"

int main() {
    printf("Hello, World!\n");

    SeqStack *seqStack;
    InitStack(seqStack);
    Push(seqStack, 500);

    return 0;
}

struct abc {
    int key
};
typedef struct abc List;

void InsertSort(List R, int n)
{
    for (int i = 2; i <= n; i++) {
        R[0] = R[i];
    }

}

void SelectSort(List R, int n)
{
    for (int i = 1; i <=n; ++i) {
        int min = i;
        for (int j = 0; j < n; ++j) {
            if (R[i].key)
        }
    }
}