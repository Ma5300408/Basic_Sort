#include<stdio.h>
#include<stdlib.h>

void Insert(int a[],int index,int num_to_insert){
      
     a[0] = num_to_insert;

    while(num_to_insert < a[index]){
            a[index+1] =  a[index];
            index--;
    }
    
     a[index+1] = num_to_insert;
}

void Insertion_Sort(int a[],const int n){

   int i;
   for(i = 2; i < n ; i++){
     int temp =  a[i];
      Insert(a,i-1,temp);
   }

}



int main()
{

   int a[13] = {0,635,596,653,609,738,757,715,776,687,602,657,734};
   Insertion_Sort(a,13);
    int j;
    printf("After Sorted:");
    for(j = 1; j < 13; j++)printf(" %d ",a[j]);
      printf("\n");


}




