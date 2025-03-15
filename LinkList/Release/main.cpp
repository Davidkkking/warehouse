#include "Headers.h"

int main() {
    // 单链表测试
    Node* head = NULL;
    appendNode(&head, 1);
    appendNode(&head, 2);
    appendNode(&head, 3);
    printf("单链表：");
    printList(head); // 1 -> 2 -> 3 -> NULL

    // 双向链表测试
    DNode* dhead = NULL;
    appendDNode(&dhead, 1);
    appendDNode(&dhead, 2);
    printf("双向链表：");
    printDList(dhead); // 1 <-> 2 <-> NULL

    return 0;
}