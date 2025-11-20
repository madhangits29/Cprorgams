#include<stdio.h>
using namespace std;
#include <iostream>

// pass by reference in C++
// It is monlithlical coding  but we use function
// NO more specific use case

void swap (int &x , int &y)
{

    int temp;
    temp =x;
    x=y;
    y=temp;

}

int main(void)
{

int n1=10, n2=20;
printf("Before Swapping n1=%d n2=%d\n",n1,n2 );
swap(n1,n2);
printf("After Swapping n1=%d n2=%d\n",n1,n2 );

return 0;

}
