#include "stdio.h"
#include "sort.h"

int main()
{
    int a[]={10,6,9,2,1,8,7};
    QuickSort(a,0,6);
    for(int i=0;i<7;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}