#include<stdio.h>
#include<stdlib.h>

// Declaration of the data type structure
struct rectangle {
    int length;
    int breadth;
};

int main(){

// Declaring variable of structure data type
struct rectangle *p;

// Allocating memory dynamically

  p = (struct rectangle *)malloc (sizeof(struct rectangle));

  // Assign the variable value

  p->length = 100;
  p->breadth= 200;

  // getting value
  printf("Value in P %d\n",p);
  printf("length of the rectangle %d\n",p->length);
  printf("breadth of the rectangle %d\n",(p->breadth));





}