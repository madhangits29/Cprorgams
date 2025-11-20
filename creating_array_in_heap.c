#include <stdio.h>
#include <stdlib.h>
//  This Function Creates Array in the Heap
int* creating_array(int n)

{
    int *ptr;
    ptr= (int*) malloc (sizeof(int) * n);
    return(ptr);
}

void main ()
{

 int *arr;
 int n =7;
 arr=creating_array(n);

 printf("Printing Address of the 5 value array");

 for (int i=0 ;i<n;i++)
 {

    printf( "Address of the value %d\n",arr+i);
 }

}