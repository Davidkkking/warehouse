#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>

//������ṹ����
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// ������������
Node* createNode(int data);
void appendNode(Node** head, int data);
void printList(Node* head);

//˫������ṹ����
typedef struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
} DNode;

// ˫������������
DNode* createDNode(int data);
void appendDNode(DNode** head, int data);
void printDList(DNode* head);

#endif 
