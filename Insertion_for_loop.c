#include<stdio.h>
#include<stdlib.h>




void Insert(int a[],int index,int pivot){
   int j = 0;
   for(j = index; pivot < a[j] && j >= 0; j--)a[j+1] = a[j];
   a[j+1] = pivot;
}

void Insertion_Sort(int a[],const int n){

   int i;
   for(i = 1; i < n-1 ; i++){
     int t =  a[i];
      Insert(a,i-1,t);
   }

}



int main(int argc, char ** argv)
{

    int a[13] = {0,635,596,653,609,738,757,715,776,687,602,657,734};
    printf("Insertion Sort for loop version : \n");
    Insertion_Sort(a,13);
    int j;
    printf("After Sorted:");
    for(j = 1; j < 13; j++)printf(" %d ",a[j]);
      printf("\n");

   return 0;
}

