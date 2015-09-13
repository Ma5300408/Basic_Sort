#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y){int t = x; x = y; y = t;}


void QuickSort(int a[],const int left,const int right){

       if(left < right){
           int i = left;
           int j = right+1;
          int pivot = a[left];
           
          do{
              
               do{ i++; }while(a[i] < pivot);
               do{ j--; }while(a[j] > pivot);  
               if(i < j)SWAP(a[i],a[j]);              
             }while(i < j);
          SWAP(a[left],a[j]);
/*           for(j = 0; j < 12; j++)printf(" %d ",a[j]);
      printf("\n");
          getchar();*/
          QuickSort(a,left,j-1);     
          QuickSort(a,j+1,right);
       }

}

int main()
{

   int a[12] = {635,596,653,609,738,757,715,776,687,602,657,734};
   QuickSort(a,0,11);
    int j;
    printf("After Sorted:");
    for(j = 0; j < 12; j++)printf(" %d ",a[j]);
      printf("\n");


}


