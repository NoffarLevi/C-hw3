#include <stdio.h>
#include "optionsAB.h"
#define WORD 30
#include <string.h>

int substring( char * str1, char * str2){
int count=0;
int length1=strlen(str1);
int length2=strlen(str2);
int j=0;

for (int i=0; i<length1; i++){
if(j<length2){
if( *(str2+j) == *(str1+i)){
count++; j++;
}
else{
count=0;
j=0;
}
}
}
if(length2==count){
 return 1;
}
return 0;

char * find = strstr(str1, str2);
if(find){
return 1;
}
else{return 0;}
}
			
int similar(char *s, char *t, int n)
{
int length=strlen(s);
if(strcmp(s, t)==0){return 1;}
else 
{
for(int i=0; i<length; i++)
{
printf("i is %d\n", i);
char word[] = "heoys";
int idxToDel = i;
memmove(&word[idxToDel], &word[idxToDel + 1], strlen(word) - idxToDel);
if(strcmp( word, t)==0){return 1;}
}
}
return 0;
}