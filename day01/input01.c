
#include <stdio.h>

void main()
{
    int n;
    printf("���� �ϳ��� �Է��ϼ���: ");
    scanf("%d", &n);

    while (1) {
        if (n == 0) {
            printf("�����մϴ�.\n");
            break;
        }
        else if (n == 1) {
            printf("1�� �Է��ϼ̽��ϴ�.\n");
            break;
        }
        else if (n == 2) {
            printf("2�� �Է��ϼ̽��ϴ�.\n");
            break;
        }
        else {
            continue;
        }
    }
}
