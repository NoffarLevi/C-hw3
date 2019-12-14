#include <stdio.h>
#include <math.h> 
#include "arrays.c"

#define	ARRAYSIZE 4
int ARRAY [] ={1,3,6,4};
int* pointer1 = ARRAY;
#define  SHIFTBY 2 

#define ARRSIZE 50
int ARR[ARRSIZE]={0};
int* pointer2 = ARR;

int main(){

int insertedNum=0; 
int s=0;

/* Q1 part a */
shift_element(pointer1, SHIFTBY);
for (int loop=0; loop<ARRAYSIZE; loop++){ /* printing ARRAY */
printf("%d \n", *(ARRAY+loop));
}

for (int lop=0; lop<ARRSIZE; lop++){   /* adding numbers from user into ARR */
printf("Please Enter a Whole Number for Index %d: ", lop);
s=scanf("%d ", &insertedNum); 
/*while(s!=1){
printf("Please Enter a Number :"); what if user enters something invalid
s=scanf("%d ", &insertedNum); 
} */
*(ARR+lop)=insertedNum;
}
printf("ARR is : ");
for (int lp=0; lp<ARRSIZE; lp++){  /* printing  ARR */
printf("%d,", *(ARR+lp));
}
printf("\n");

/* Q1 part b */
insertion_sort(pointer2 , ARRSIZE); /* sorts ARR */
printf("Sorted ARR is : ");
for (int lp=0; lp<ARRSIZE; lp++){  /* printing sorted ARR */
printf("%d,", *(ARR+lp));
}
printf("\n");

return 0;
}
