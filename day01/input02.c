
#include <stdio.h>

void main()
{
    int n1, n2, big_num;
    printf("�� ���� ������ �Է��ϼ���> ");
    scanf("%d %d", &n1, &n2);

    big_num = n1 > n2 ? n1 : n2;
    printf("�Է°� �� �� ū ���� %d�Դϴ�.\n", big_num);

    /*
    if (n1 > n2) {
      printf("�Է°� �� �� ū ���� %d�Դϴ�.\n", big_num);
    }
    else {
      printf("�Է°� �� �� ū ���� %d �Դϴ�.\n",n2);
    }
    */
}

