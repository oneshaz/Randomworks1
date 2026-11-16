#include <stdio.h>
#include <string.h>

int main()
{
    int a = 10 ; 
    int *p = &a ; //*p is declaration of pointer variable
    //pointer variable is just another variable which stores the address of another variable
    printf("%d \n", a ) ; 
    printf("%p \n", &a ) ; 
    printf("%d \n", *p ) ;
    printf("%p \n", p ) ;  //%p prints the memory address
    
    //when you *P - it dereferences the pointer, you can access the value at that address
    
    int b = 10 ; 
    int *p1 = &b ; 
    printf("%d \n", b ) ; 
    *p1 = 20 ; //updates the value 
    printf("%d \n", b ) ; 
    
    //you can never leave a pointer uninitialized, so people use NULL 
    int *p2 = NULL ; 
    //do not dereference a null pointer
    
    // a pointer variable has a specific datatype
    // each pointer is designed to meet the requirements of its datatype 
    // void* is a generic datatype which can hold addressess of any datatype 
    
    void * ptr_gen ; 
    
    int a1 = 10 ; 
    char c1 = 'a' ; 
    float b1 = 12.234 ; 
    
    ptr_gen = &a1 ; 
    ptr_gen = &b1 ; 
    ptr_gen = &c1 ; 
    
    // you cannot dereference a void* pointer, *ptr_gen will give error
    
}