#include<stdio.h>

// 1. while passing we must as pass by address not by valuw
// 2. PASS the Address of the array

void printing_array(int arr[],int n)
{
 // arr contains the address of the array

 int i;
 for(i=0;i<n;i++)
 {

  printf("value %d\n",arr[i]);

 }

}

int main()

{

    int arr[5]={1,2,3,4,5};

    printing_array(arr,5); // Passing array address


}