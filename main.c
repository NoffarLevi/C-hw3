#include <stdio.h>
#include <math.h> 
#include "arrays.c"

#define	CHECKSIZE 4
//#define  CHECK [] ={2,5,8,4}
// #define int* pointer = CHECK;
#define  SHIFTBY 2
//gcc -o output 'main.c'
int main(){

int CHECK[] = {1,5,8,4};
int shift=SHIFTBY;

shift_element(CHECK+1, shift);


for (int loop=0; loop<CHECKSIZE; loop++){
printf("%d ", *(CHECK+loop));
}




return 0;
}