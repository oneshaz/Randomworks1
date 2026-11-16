#include <stdio.h>

int main()
{
    int a = 10 ; 
    int *p = &a ; 
    int **q = &p ; 
    
    printf("%d \n", a ) ; //dereferenced variable a 
    printf("%d \n", *p ) ; 
    printf("%d \n", **q ) ; 
    
    printf("%d \n", *p ) ; //address of a variable 
    printf("%d \n", **q ) ; 
    
    printf("%p \n", *q ) ; //address of pointer variable p 
    printf("%p \n", &p ) ; 
    
    printf("%p \n", &q ) ; //finally, the address of q
    
    //we use doublep pointer in the case where the function might need to modify the pointer variable itself 
    //we can use double pointer to change pointer 
    
    //we can also update value directly from double pointer of a 
    
    **q = 120 ; 
    printf("%d \n", **q ) ; 
    
    return 0 ; 
}