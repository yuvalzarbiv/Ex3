#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "isort.h"
#define SIZE 50



int main() {


int tmp = 0;
int arr[SIZE];
printf("insert %d numbers:\n" , SIZE);
for (int i = 0;i < SIZE; i++){
	scanf("%d",&tmp);
		*(arr+i) = tmp;
                tmp=0;
        }
printf("The original array is:\n");
   for (int i=0; i < SIZE ;i++){
    printf("%d,",*(arr+i));
   }
printf("\n");

insertion_sort(arr,SIZE);

  
printf("The array after insertion_sort is:\n");
for (int i=0; i < SIZE ;i++){
    printf("%d,",*(arr+i));
   }
printf("\n");

 
}

