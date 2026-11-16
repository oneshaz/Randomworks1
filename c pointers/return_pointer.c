#include <stdio.h>

int display( int a )
{
    return a ; 
}

int* display1( int* ptr1 )
{
    return ptr1 ; 
}

int main()
{
    int a = 10 ; 
    int val = display( a ) ; 
    printf("%d \n", val ) ; 
    
    int b = 20 ; 
    int *ptr = display1( &b ) ;
    printf("%p \n", ptr ) ; 
    printf("%d \n", *ptr ) ; 
    
    return 0 ; 
}