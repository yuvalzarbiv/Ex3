#include <stdio.h>
#define SIZE 50


int array[SIZE];

void shift_element(int* arr, int i) {
	/*if (((arr)+(4 * i)) > (arr + (SIZE - 1))) {
		printf("EROR: You have exceeded the boundaries of the array");
	}
	else
	{*/
		
		for (int j = i ; j > 0; j--)
		{
			*(arr + j) = *(arr + j-1);
			
		}
			*(arr) = 999;
		printf("\n");
	}
//}

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

//int main()
//
//{
	//int array[] = { 1,5,7,4,2,13,0,51,22}, i;
	//for (i = 0; i < 9; i++) {
		//printf("%d,", *(array + i));
	//}
	//printf("\n");
	//printf("%d\n", *(array + 1));
	//shift_element(array + 1, 2);
	
	//for (i = 0; i < 9; i++) {
		//printf("%d,", *(array + i));
//}
//	printf("\n");*/
	//insertion_sort(array, 9);
	//printf("%d\n", *(array + 2));
	//for (int i = 0; i < 9; i++) {
		//printf("%d,", *(array + i));
//	}
//	printf("\n"); 
//
//
//
//
//}
