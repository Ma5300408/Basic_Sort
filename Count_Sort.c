#include<stdio.h>
#include<stdlib.h>

int range_count[10] = {0}; // 0-9


void CountSort(int a[],const int n)
{




}



int main(int argc, char ** argv)
{

   int a[12] = {635,596,653,609,738,757,715,776,687,602,657,734};
   CountSort(a,12);   
    int j;
    printf("After Sorted:");
    for(j = 0; j < 12; j++)printf(" %d ",a[j]);
      printf("\n");

  return 0;
}