#include <stdio.h>

int main()
{
    //generic pointer
    
    int a = 10 ; 
    char b = 'b' ; 
    float c = 12.25 ; 
    
    void* ptr = &a ; 
    // printf("%d \n", *ptr) ; //will give error cuz you cannot dereference a generic pointer
    
    //to print the value of a generic pointer - you have to typecast it 
    printf("%d \n", *(int*)ptr) ; 
    
    ptr = &b ; 
    printf("%c \n", *(char*)ptr) ; 
}