
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    if (a > b) { return a - b; }
    else { return b - a; }
}

int multiple(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return a / b;
}


void main()
{
    while (1) {
        int num1, num2;
        char op;
        printf("\n�� ���� ������ �Է��Ͻÿ�>");
        scanf("%d %d", &num1, &num2);
        printf("�����ڸ� �Է��Ͻÿ� > (����� X)");
        scanf(" %c", &op);

        if (op == '+') {
            printf("%d", add(num1, num2));
        }
        else if (op == '-') {
            printf("%d", minus(num1, num2));
        }
        else if (op == '*') {
            printf("%d", multiple(num1, num2));
        }
        else if (op == '/') {
            printf("%.1f", divide(num1, num2));
        }
        else if (op == 'X') {
            printf("���α׷� ����\n");
            break;
        }
    }
}
