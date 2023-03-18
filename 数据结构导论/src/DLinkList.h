#include <stdlib.h>

struct dbNode {
    int data;
    struct dbNode *prior, *next;
};
typedef struct dbNode *dbPointer;
typedef dbPointer DLinkList;