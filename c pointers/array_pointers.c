#include <stdio.h>

int main()
{
    int arr1[3] = { 1 , 2 , 3 } ; //this is a generic array of 3 integers
    
    int *ptr_arr[3] = { &arr1[0] , &arr1[1] , &arr1[2] } ; 
    
    printf("%d \n", *ptr_arr[0]) ; 
    printf("%p \n", &ptr_arr[0]) ; 
    
    int *pointarr[3] ; //this declares an array of 3 elements - where each element is an int pointer
    
    int arr[] = {10, 20, 30};

    int *ptr[3] = {&arr[0], &arr[1], &arr[2]};

    printf("%d\n", *ptr[1]);
    printf("%d\n", *(ptr[2]));
    printf("%d\n", **(ptr + 0));
    
    //for pointers; ptr[i] = *(ptr + i) ; and we need *ptr[i] = **(ptr + i)
    //like for arrays; arr[i] = *(arr + i) ; 
    
    return 0 ; 
}