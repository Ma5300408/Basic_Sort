#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y){int t = x; x = y; y = t;}

void Adjust(int a[],const int root,const int n){
   int e = a[root];
   int j; 
   
   for(j = 2*root; j<=n; j*2){
        
       if(j < n && a[j] < a[j+1])j++;
       if(e >= a[j])break;
       a[j/2] = a[j];
   }
   a[j/2] = e;
}


void HeapSort(int a[],const int n){
   
   int i;
   for(i = n/2; i>=1; i--){
      printf("%d\n",i);  
      Adjust(a,i,n);
    }
    printf("finished Adjust!\n");

   for(i = n-1; i>=1; i--){
       SWAP(a[1],a[i+1]);
       Adjust(a,1,i);
   }
  // printf("finished sorted!\n");
}


int main()
{

   int a[13] = {0,635,596,653,609,738,757,715,776,687,602,657,734};
   HeapSort(a,12);
    int j;
    printf("After Sorted:");
    for(j = 0; j < 12; j++)printf(" %d ",a[j]);
      printf("\n");


}
