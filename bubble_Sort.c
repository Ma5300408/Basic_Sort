#include<stdio.h>
#include<stdlib.h>


enum {
    SWAP_ADDRESS = 1,
    SWAP_INPLACE_ADD = 2,
    SWAP_INPLACE_MULITPLE = 3,
    SWAP_INPLACE_XOR = 4
};



void swap_address(int * a,int * b){
    int t = *a;
    *a = *b;
    *b = t;
}

void swap_inplace_add(int* a, int* b){
    if (a != b){ // important to handle a/b share the same reference
        *a = *a+*b;
        *b = *a-*b;
        *a = *a-*b;
    }
}
void swap_inplace_multiple(int* a, int* b){
    if(a != b){
        *a = (*a)*(*b);  
        *b = (*a)/(*b); 
        *a = (*a)/(*b);
    }
}


void swap_inplace_xor(int * a, int * b){
    if(a != b){
        *a ^= *b; // a = A XOR B
        *b ^= *a; // b = B XOR ( A XOR B ) = A
        *a ^= *b; // a = ( A XOR B ) XOR A = B    *a ^= *b;
    }
}

void bubble_Sort(int a[],const int n){
   
   int options = 0;
   printf("choice the SWAP way :\n" 
          "1. SWAP_ADDRESS. \n"
          "2. SWAP_INPLACE_ADD.\n"
          "3. SWAP_INPLACE_MULTIPLE.\n"
          "4. SWAP_INPLACE_XOR.\n"
          "Choice: ");
   scanf("%d",&options);
   printf("\n");

   int i;
   for(i = 1; i < n ; i++){
     int j;
     int t;
     for(j = 0; j <= n-1; j++){
        if(a[j] > a[j+1]){
            switch (options){

            SWAP_ADDRESS:
                swap_address(&a[j],&a[j+1]);
            break;

            SWAP_INPLACE_ADD:
                swap_inplace_add(&a[j],&a[j+1]);
            break;
            
            SWAP_INPLACE_MULITPLE:
                swap_inplace_multiple(&a[j],&a[j+1]);
            break;

            SWAP_INPLACE_XOR:
                swap_inplace_xor(&a[j],&a[j+1]);           
            break;
            
            default:
                 t = a[j];
                 a[j] = a[j+1];
                 a[j+1] = t;
            break;

            }
        }
     }
   }
}



int main(int argc, char ** argv){

    int a[13] = {0,635,596,653,609,738,757,715,776,687,602,657,734};
    printf("bubble Sort for loop version : \n");
    bubble_Sort(a,13);
    int j;
    printf("After Sorted:");
    for(j = 1; j < 13; j++)printf(" %d ",a[j]);
      printf("\n");

   return 0;
}