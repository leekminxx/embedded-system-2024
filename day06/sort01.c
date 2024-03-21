 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>

void bubSort(int* ary, int size)
 {
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (ary[i] < ary[j]) {
				temp = ary[i];
				ary[i] = ary[j];
				ary[j] = temp;				
			}			
		}		
	}
 }
 void main()
 {
	 int ary[] = { 9, 4, 8, 15, 3, 7, 2, 1 };
	 int size = (sizeof(ary) / sizeof(int));
	
	 bubSort(ary, size);
	
	 for (int i = 0; i < size; i++) {
		 printf("%d\n", ary[i]);
	 }
 }
