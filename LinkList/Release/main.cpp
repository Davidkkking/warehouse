#include "Headers.h"

int main() {
    // ���������
    Node* head = NULL;
    appendNode(&head, 1);
    appendNode(&head, 2);
    appendNode(&head, 3);
    printf("������");
    printList(head); // 1 -> 2 -> 3 -> NULL

    // ˫���������
    DNode* dhead = NULL;
    appendDNode(&dhead, 1);
    appendDNode(&dhead, 2);
    printf("˫������");
    printDList(dhead); // 1 <-> 2 <-> NULL

    return 0;
}