#include <stdio.h>
#include <stdlib.h>

// ������ڵ�ṹ��
typedef struct Node {
    int data;
    struct Node* next;
} Node;

//�����½ڵ�
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("�ڴ����ʧ��\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


//������ĩβ����ڵ�
void appendNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;    // ����Ϊ��ʱֱ������Ϊͷ�ڵ�
        return;
    }
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next; // ���������һ���ڵ�
    }
    current->next = newNode; // �����½ڵ�
}

//��ӡ����
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}






// ˫������ڵ�ṹ��
typedef struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
} DNode;


//������˫��ڵ�
DNode* createDNode(int data) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    if (!newNode) {
        printf("�ڴ����ʧ��\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}


//��˫������ĩβ����ڵ�
void appendDNode(DNode** head, int data) {
    DNode* newNode = createDNode(data);
    if (*head == NULL) {
        *head = newNode;     // ����Ϊ��ʱֱ������Ϊͷ�ڵ�
        return;
    }
    DNode* current = *head;
    while (current->next != NULL) {
        current = current->next; // ���������һ���ڵ�
    }
    current->next = newNode;
    newNode->prev = current;    // �����½ڵ��ǰ��
}

//��ӡ˫������
void printDList(DNode* head) {
    DNode* current = head;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}







