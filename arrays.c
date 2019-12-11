#include "arrays.h"

shift_element(int* arr, int i){ 

while(i>0){
int *p= arr+i;
*p= *(p-1);
i--;
}

}