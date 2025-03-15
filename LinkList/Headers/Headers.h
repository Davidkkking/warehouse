#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>

//单链表结构声明
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// 单链表函数声明
Node* createNode(int data);
void appendNode(Node** head, int data);
void printList(Node* head);

//双向链表结构声明
typedef struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
} DNode;

// 双向链表函数声明
DNode* createDNode(int data);
void appendDNode(DNode** head, int data);
void printDList(DNode* head);

#endif 
