#include <stdio.h>

int main()
{
    int a = 10 ; 
    a++ ; //increases the value by 1 
    
    int *ptr = &a ; 
    ptr++ ; //increases the value NOT by 1 byte, but by the memory occupied by the datatype
    // int 4 bytes 
    // float 4 bytes 
    // char 1 byte 
    // double 8 bytes
    // bool 1 byte
    
    int arr[] = { 1 , 2 , 3 , 4 , 5 } ; 
    int *ptr1 = &arr[0] ; 
    //int *ptr1 = arr , same thing 
    //ptr1++ will point to the next element in array, the pointer increased by 4 bytes
    //4 bytes is one unit space of integer datatype 
    
    //new address = old address + sizeof(int)*number of increments
    
    int size = sizeof( arr ) / sizeof( arr[0] ) ; //this too is the work of pointers
    
    for( int i = 0 ; i < size ; i++ )
    {
        printf("%d ", *ptr1 ) ; 
        ptr1++ ; 
    }
    
    printf("\n") ;
    
    int *ptr2 = arr ; 
    ptr2 += 3 ; 
    printf("%d \n" , *ptr2) ;
    
    printf("%d \n" , *(arr + 1)) ; //you can also access like this
}