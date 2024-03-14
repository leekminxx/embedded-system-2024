#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* next;    // �ڱ��ڽ��� ����Ű�� ����ü����(�ڱ���������ü)
} node;
void main()
{
    node* head = (node*)malloc(sizeof(node));     // head ��� :  ù��° ��带>
    head->next = NULL;

    node* node1 = (node*)malloc(sizeof(node));    // ù��° ���
    node1->data = 10;
    node1->next = NULL;
    head->next = node1;

    node* node2 = (node*)malloc(sizeof(node));    // �ι�° ���
    node2->data = 20;
    node2->next = NULL;
    node1->next = node2;    // �ι�° ��� ����

    node* node3 = (node*)malloc(sizeof(node));
    node3->data = 30;
    node3->next = NULL;
    node2->next = node3;

    // curr�̶�� ��� Ÿ�� �����ͷ� ���鿡 ����!
    node* curr = head->next;    // ù��° ��带 ����Ű�� �Ѵ�.
    while (curr != NULL) {
        printf("%d\n", curr->data);
        curr = curr->next;          // ���� ��带 ����Ű�� ��!
    }

    free(node1);
    free(node2);
    free(node3);
}
