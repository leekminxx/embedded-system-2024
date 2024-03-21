// 순차탐색
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
	   if (ridx == -1) printf("찾는 원소가 없습니다");
	   else {
		     printf("검색 할 값을 입력하시오:%d\n", ridx);
		
			
	}
 }
