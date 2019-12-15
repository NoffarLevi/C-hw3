#include <stdio.h>
#include "optionsAB.c"
#define LINE 256
#define WORD 30

int main(){

FILE * fPointer;
fPointer = fopen("text.txt", "r");
char singleLine[LINE];
char singleWord[WORD];
char option_type=' ';

// fgets( singleLine, LINE, fPointer);
//
// printf("Read String1 %c", *singleLine);
// printf("%c", *(singleLine+1));
// printf("%c\n", *(singleLine+2));

//printf("Read String2 %c\n", singleLine[4]);


// while(!feof(fPointer)){ 
// 
//         char str1[WORD], str2[WORD], str3[WORD], str4[WORD];
//         fscanf(fPointer, "%s %s %s %s", str1, str2, str3, str4);
//         printf("Read String1 %s\n", str1);
//         printf("Read String2 %s\n", str2);
//         printf("Read String3 %s\n", str3);
//         printf("Read String4 %s\n", str4);
// 
// 	//puts(singleLine);
// }
//  fclose(fPointer);

char str2[WORD]="hey";
char str1[WORD]="heoys";

int result=similar(str1, str2, 1);
if(result==1){
printf("str2 %s is aj substring of str1 %s\n", str2, str1); 
}
else
printf("str2 %s is notj a substring of str1 %s\n", str2, str1); 

/*
switch(option_type){

case 'a':

break;

case 'b':

break;

default:
printf("Invalid option_type \n" );
    break;
    
}
*/

	return 0;
}