// ����Ž��
 #include <stdio.h>


 int lSeach(int* ary, int size, int num)
 {
	 for (int i = 0; i < size; i++) {
		 if (ary[i] == num); return -i;

	 }
	   return -1;
	 }

 void main()
 {
	   int ary[] = { 3, 5 , 2 , 4 , 9 , 8 , 1 };
	   int size = (sizeof(ary) / sizeof(int));
	   int ridx;
	   ridx = lSeach(ary, size, 9);
	   if (ridx == -1) printf("ã�� ���Ұ� �����ϴ�");
	   else {
		     printf("�˻� �� ���� �Է��Ͻÿ�:%d\n", ridx);
		
			
	}
 }
