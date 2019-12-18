#include <stdio.h>
#include <string.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30


int Getline(char s[])
{
    char c = getchar();
    int counter = 0;
    while (c != '\n' && c != EOF){
    *(s + counter) = c;
     counter++;
     c = getchar();
    }
    s[counter] = '\0';
    if(c == EOF){
        return EOF;
    }
   return counter; 
}

int getword(char w[]){
    int counter=0;
    char c = getchar();
    while(c!='\n' && c!='\t' && c!=' ' && c!=EOF){
       *(w+counter) = c;
        c = getchar();
        counter++;   
     }
 w[counter] = '\0';
 if(c == EOF){
        return EOF;
    }
  return counter;
 }

int Length(char c[])
{
	int length = 0;

	while (c[length] || c[length]=='\n' || c[length]=='\t' || c[length]==' ')
	{
		length++;
	}
	return length;
}

int substring(char* str1, char* str2)
{
	int len1 = Length(str1);
	int len2 = Length(str2);
	int i = 0;
	int j = 0;
	int counter = 0;

	while (i < len1){
		while (str1[i] == str2[j]&&j<len2){
			counter++;
			j++;
			i++;
	        }
		if (counter > 0){
		    if (counter == len2){
			return 1;
		    }
		}
	j = 0;
	i++;
	counter = 0;
	}
	return 0;
}

int similar(char* s, char* t, int n)
{
	int len1 = Length(s);
	int len2 = Length(t);
	int counter = 0;
	int i = 0, j = 0;
	int d = 0;;
	while ( j < len1){
	     if (i < len2){
		if (t[i] == s[j]){
			counter++;
			i++;
		}
		else{
	             d++;
		     }
	      }
	     else{
		  d++;
		}

	   j++;
	}
	if (counter == len2 && d == n){
		return 1;
	 }
		return 0;
}

void print_lines(char* str) {
 char line[LINE];
 while(Getline(line) != EOF) {
 	if(substring(line,str)) {
		printf("%s\n", line);
	}
 }
}


void print_similar_words(char* str) {
	char word[WORD];
	getword(word);
	while (getword(word) != 0) {
		if (similar(word, str, 1) != 0 || similar(word, str, 0) != 0) {
			printf("%s\n", word);
	}
}

}
