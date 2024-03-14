#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* next;
} node;

// �������� - �� ��尡 ���� ������!
void pre_addNode(node* pnode, int _data)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = _data;
    newNode->next = pnode->next;
    pnode->next = newNode;
}
// �������� - �� ��带 ���� �ڷ�!
void rear_addNode(node* pnode, int _data)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = _data;
    newNode->next = NULL;

    // �ƹ��� ��嵵 �������� ���� ���
    if (pnode->next == NULL)
    {
        pnode->next = newNode;
    }
    // �̹� ������ ������ �ִ� ���
    else
    {
        node* curr = pnode->next;
        // ������ ������ ��ȸ�ϴٰ�!
        while (curr->next != NULL) {
            curr = curr->next;
        }
        // ������ ��忡 ���ο� ��� ����!!!
        curr->next = newNode;
    }
}


void showNode(node* pnode)
{
    node* curr = pnode->next;
    while (curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
}

void main()
{
    node* head = (node*)malloc(sizeof(node));
    head->next = NULL;

    pre_addNode(head, 10);
    pre_addNode(head, 20);
    pre_addNode(head, 30);
    pre_addNode(head, 40);
    pre_addNode(head, 50);

    rear_addNode(head, 60);
    rear_addNode(head, 70);
    rear_addNode(head, 80);
    rear_addNode(head, 90);
    /*
    node* curr = head->next;
    while(curr != NULL){
      printf("%d\n", curr->data);
      curr = curr->next;
    }
    */
    showNode(head);

    // �� ���� ������ free(),
    // �׷� �� ���� ��尡 ����Ű�� ���� ��带 head��!
    // head�� �̵���Ű�鼭 ���ʴ�� free() ���ֱ�
    node* curr = head->next;    // curr�� ù��° ��带 ����Ŵ
    while (curr != NULL) {
        head->next = curr->next;  // �ι�° ��尡 ù��° ��尡 ��!
        free(curr);               // ù��° ��� free()
        curr = head->next;        // ���� curr�� �ι�° ���
    }

    printf("%d\n", head->next); // 0 ��� (NULL)
    free(head);     // head�� �������� free()
    printf("%d\n", curr);       // 0 ���
    printf("%d\n", curr->data); // Segmentation fault : �߸��� �޸� ���� ����>
}

