#include <stdio.h>
#include <stdlib.h>
#include "txtfind.h"
#include <string.h>




int main() {

//txtfind

 char word[WORD] = "";
 getword(word);
 char option[WORD] = "";
 getword(option);
 

 if(option [0] !='a' && option [0] !='b'){
 	printf("Error: you made typing mistake \n \n ");
 }
 if(option [0] == 'a') {
 	printf("Printing lines that contain the word '%s':\n\n",word);
 	print_lines(word);
 }
 else if(option [0] =='b') {
	 printf("Printing the similar words for '%s' up to 1 degree of similarity:\n",word);
 	print_similar_words(word);
      }
}
