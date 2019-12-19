#include <stdio.h>
#define SIZE 50


int array[SIZE];

void shift_element(int* arr, int i) {
	
		for (int j = i ; j > 0; j--)
		{
			*(arr + j) = *(arr + j-1);
			
		}
			*(arr) = 999;
		//printf("\n");
	}

void insertion_sort(int* arr, int len) {
		int* i, * last = arr + len;
		
		for (i = arr + 1; i < last; i++)
		{
			
			if (*i < *(i - 1)) {
				int tmp = *i;
				int j = 0;
				while (tmp > *(arr + j))
				{
					j++;
				}
				shift_element((arr + j), (i) - (arr + j));
				*(arr + j) = tmp;

			}	
		}
}


