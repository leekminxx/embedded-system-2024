
#include <stdio.h>

void main()
{
	printf("%d\n", 35);     // ���� ���
	printf("%d\n", 0123);   // 8����
	printf("%d\n", 0xACC);  // 16����
	printf("%f\n", 3.14);

	printf("int : %d\n", sizeof(int));
	printf("float : %d\n", sizeof(float));
	printf("double :%d\n", sizeof(double));

	printf("%c\n", 'A');
	printf("%d\n", 'A');
	printf("%c\n", 97);

	printf("%s\n", "RaspberryPI OS\n");

}
