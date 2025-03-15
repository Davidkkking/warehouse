#include <stdio.h>
#include <stdlib.h>

// 单链表节点结构体
typedef struct Node {
    int data;
    struct Node* next;
} Node;

//创建新节点
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("内存分配失败\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


//在链表末尾插入节点
void appendNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;    // 链表为空时直接设置为头节点
        return;
    }
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next; // 遍历到最后一个节点
    }
    current->next = newNode; // 插入新节点
}

//打印链表
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}






// 双向链表节点结构体
typedef struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
} DNode;


//创建新双向节点
DNode* createDNode(int data) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    if (!newNode) {
        printf("内存分配失败\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}


//在双向链表末尾插入节点
void appendDNode(DNode** head, int data) {
    DNode* newNode = createDNode(data);
    if (*head == NULL) {
        *head = newNode;     // 链表为空时直接设置为头节点
        return;
    }
    DNode* current = *head;
    while (current->next != NULL) {
        current = current->next; // 遍历到最后一个节点
    }
    current->next = newNode;
    newNode->prev = current;    // 设置新节点的前驱
}

//打印双向链表
void printDList(DNode* head) {
    DNode* current = head;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}







