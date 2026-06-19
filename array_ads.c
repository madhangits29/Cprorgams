#include<stdio.h>
#include <stdlib.h>

void display_array(int *array_start , int length);
struct array {

     int *ptr;
     int size;
     int length;

};

int main()
{

struct array a;
printf("Enter the Size of the Array\n");
scanf("%d",&a.size);
a.ptr =  (int*) malloc (a.size * 4);

//Filling Array

for (int i=0 ; i <a.size ; i++)
{

printf("Enter the Array values:\n");
scanf("%d",&a.ptr[i]);

}

printf("\n");
display_array(a.ptr, a.size);


return 0;
}


void display_array(int *array_start , int length)
{

     int *starting_add = array_start;
      ;

for (int i=0 ;i<length ; i++)
{
 
     
printf ("%d\t" , starting_add[i]);

}
}