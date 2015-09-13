#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y){int t = x; x = y; y = t;}


void SelectionSort(int a[],const int n){
   int i;   
   int k;
   for(i = 0; i < n; i++){
     int min = i;
     for(k = i+1; k < n; k++ ){
       if(a[min] > a[k] )min = k;
     }
       SWAP(a[i],a[min]);
   }

}

int main()
{

   int a[12] = {635,596,653,609,738,757,715,776,687,602,657,734};
   SelectionSort(a,12);   
    int j;
    printf("After Sorted:");
    for(j = 0; j < 12; j++)printf(" %d ",a[j]);
      printf("\n");


}
