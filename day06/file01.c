#include <stdio.h> 
#include <stdlib.h>


void main()
{
  char msg[20] = "File Test!!\n";
   FILE * fp;      // ���������� Ÿ���� ���� ����
  fp = fopen("test.txt", "w");  // ���� ����

   if (fp == NULL) {
	  fprintf(stderr, "Error");  // ���� ����¿��� ������>
	  exit(1);    // ���Ḧ �ǹ�
	}
   fprintf(fp, "%s\n", msg);    // ���Ϸ� ���
   printf("%s\n", msg);

   fclose(fp);
}
