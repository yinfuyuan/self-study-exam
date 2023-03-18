#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node, *LinkList;

//LinkList head = InitiateLinkList();
LinkList InitiateLinkList()
{
    LinkList head;
    head = malloc(sizeof(Node));
    head->next = NULL;
    return head;
}

//LinkList head = InitiateLinkList();
//InsertLinkList(head, 5, 1);
//InsertLinkList(head, 6, 2);
//printf("%d", LengthLinkList(head));
int LengthLinkList(LinkList head)
{
    Node *p;
    p = head;
    int j = 0;
    while (p->next != NULL) {
        p = p->next;
        j++;
    }
    return j;
}

//LinkList head = InitiateLinkList();
//InsertLinkList(head, 5, 1);
//InsertLinkList(head, 6, 2);
//printf("%d", GetLinkList(head, 1)->data);
Node *GetLinkList(LinkList head, int i)
{
    Node *p;
    p = head->next;
    int j = 1;
    while (j < i && p != NULL) {
        p = p->next;
        j++;
    }
    if (j == i) {
        return p;
    }
    return NULL;
}

//LinkList head = InitiateLinkList();
//InsertLinkList(head, 5, 1);
//InsertLinkList(head, 6, 2);
//printf("%d", LocateLinkList(head, 6));
int LocateLinkList(LinkList head, int data)
{
    Node *p;
    p = head->next;
    int i = 1;
    while (p != NULL && p->data != data) {
        p = p->next;
        i++;
    }
    if (p != NULL) {
        return i;
    }
    return 0;
}

//LinkList head = InitiateLinkList();
//InsertLinkList(head, 5, 1);
//InsertLinkList(head, 6, 2);
void InsertLinkList(LinkList head, int data, int i)
{
    Node *p, *q;
    if (i == 1) {
        q = head;
    } else {
        q = GetLinkList(head, i-1);
    }
    if (q == NULL) {
        return;
    }
    p = malloc(sizeof(Node));
    p->data = data;
    p->next = q->next;
    q->next = p;
}

//LinkList head = InitiateLinkList();
//InsertLinkList(head, 5, 1);
//InsertLinkList(head, 6, 2);
//DeleteLinkList(head, 2);
//printf("%d", LocateLinkList(head, 5));
void DeleteLinkList(LinkList head, int i)
{
    Node *p, *q;
    if (i == 1) {
        q = head;
    } else {
        q = GetLinkList(head, i-1);
    }
    if (q == NULL || q->next == NULL) {
        return;
    }
    p = q->next;
    q->next = q->next->next;
    free(p);
}