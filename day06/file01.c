#include <stdio.h> 
#include <stdlib.h>


void main()
{
  char msg[20] = "File Test!!\n";
   FILE * fp;      // 파일포인터 타입의 변수 선언
  fp = fopen("test.txt", "w");  // 파일 오픈

   if (fp == NULL) {
	  fprintf(stderr, "Error");  // 파일 입출력에서 전용적>
	  exit(1);    // 종료를 의미
	}
   fprintf(fp, "%s\n", msg);    // 파일로 출력
   printf("%s\n", msg);

   fclose(fp);
}
