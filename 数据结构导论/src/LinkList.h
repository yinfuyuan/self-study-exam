#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node, *LinkList;

LinkList InitiateLinkList()
{
    LinkList head;
    head = malloc(sizeof(Node));
    head->next = NULL;
    return head;
}