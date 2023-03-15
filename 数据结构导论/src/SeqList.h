const int maxSize = 100;
typedef struct
{
    int data[maxSize];
    int length;
} SeqList;

//SeqList L1;
//L1.length = 0;
//L1 = insertSeqList(L1, 10, 1);
//L1 = insertSeqList(L1, 20, 1);
//L1 = insertSeqList(L1, 30, 1);
//L1 = insertSeqList(L1, 40, 1);
//printf("%d\n", L1.length);
//printf("%d\n", L1.data[0]);
//printf("%d\n", L1.data[1]);
//printf("%d\n", L1.data[2]);
//printf("%d\n", L1.data[3]);
SeqList insertSeqList(SeqList L, int x, int i) {
    if(L.length == maxSize) {
        return L;
    }
    if (i < 1 || i > L.length + 1) {
        return L;
    }
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = x;
    L.length++;
    return L;
}

//SeqList L1;
//L1.length = 0;
//L1 = insertSeqList(L1, 10, 1);
//L1 = insertSeqList(L1, 20, 2);
//L1 = insertSeqList(L1, 30, 3);
//L1 = insertSeqList(L1, 40, 4);
//L1 = deleteSeqList(L1, 2);
//printf("%d\n", L1.data[0]);
//printf("%d\n", L1.data[1]);
//printf("%d\n", L1.data[2]);
//printf("Length is %d\n", L1.length);
SeqList deleteSeqList(SeqList L, int i) {
    if (i < 1 || i > L.length) {
        return L;
    }
    for (int j = i; j < L.length; j++) {
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return L;
}

//SeqList L1;
//L1.length = 0;
//L1 = insertSeqList(L1, 10, 1);
//L1 = insertSeqList(L1, 20, 2);
//L1 = insertSeqList(L1, 30, 3);
//L1 = insertSeqList(L1, 40, 4);
//printf("%d\n", locateSeqList(L1, 30));
int locateSeqList(SeqList L, int x) {
    int result = 0;
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == x) {
            result = i + 1;
        }
    }
    return result;
}