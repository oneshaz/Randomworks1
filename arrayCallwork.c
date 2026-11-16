#include <stdio.h>
#include <stdlib.h>
//a library for all standard functions
//rand, srand, malloc, calloc, free, exit
#include <time.h>
//a time library, provides functions related to date and time
//time, clock, difftime

int sumofarray( int arr[] , int size )
{
    int sum = 0 ; 
    
    for( int i = 0 ; i < size ; i++ )
    {
        sum += arr[i] ; 
    }
    
    return sum ; 
}

void agescalc( int arr[] , int size )
{
    int max = 0 ; 
    int min = 0 ; 
    int avg = 0 ; 
    
    for( int i = 0 ; i < size ; i++ )
    {
        if( arr[i] > max )
            max = arr[i] ; 
        
        if( arr[i] < min )
            min = arr[i] ; 
        
        avg += arr[i] ; 
        
    }
    
    avg /= size ; 
    
    printf("average age : %d \n", avg ) ; 
    printf("maximum age : %d \n", max) ; 
    printf("minimum age : %d", min ) ; 
}

void Frequency( int arr[] , int size )
{
    int max = arr[0] ; 
    
    for( int i = 0 ; i < size ; i++ )
    {
        if( max < arr[i] )
            max = arr[i] ; 
    }
    
    int hash[ max + 1 ] = {  } ; 
    
    for( int i = 0 ; i < size ; i++ )
        hash[arr[i]]++ ; 
    
    for( int i = 0 ; i < max + 1 ; i++ )
        printf("%d : %d \n", arr[i], hash[i]) ; 
}

void Dierollcount()
{
    //rand function 
    // int num = rand() ; generates a random number from 0 to RAND_MAX
    //RAND_MAX is a constant defined in the stdlib library
    
    
    int hash[7] = { 0 } ; 
    
    for( int i = 1 ; i < 601 ; i++ )
    {
        int face = rand() % 6 + 1 ; //ensures the only random values are between 1 and 6 ; 
        hash[face]++ ; 
    }
    
    for( int i = 1 ; i < 7 ; i++ )
    {
        printf(" face %d freq %d \n", i , hash[i] ) ; 
    }
}

void Repeated_numbers( int arr[] , int size )
{
    int max = arr[0] ; 
    
    for( int i = 0 ; i < size ; i++ )
    {
        if( max < arr[i] )
            max = arr[i] ; 
    }
    
    // int hash[ max + 1 ] = { 0 } ; //this will give error cuz max is a variable until runtime
    //use calloc - tho i dont wanna do it rn 
    
    int hash[ max + 1 ] = { } ; 
    
    for( int i = 0 ; i < size ; i++ )
        hash[arr[i]]++ ; 
    
    for( int i = 0 ; i < max + 1 ; i++ )
    {
        if( hash[i] > 1 )
            printf("%d : freq %d \n", arr[i] , hash[i] ) ; 
    }
    
    
}

int main()
{
    int arr[] = { 5 , 1 , 2 , 4 , 1 , 9 , 7 , 11 , 0 , 5 } ; 
    int size = sizeof( arr ) / sizeof( arr[0] ) ; 
    
    int sum1 = sumofarray( arr , size ) ;
    // printf("%d", sumofarray( arr , size )) ; 
    // printf("%d", sum1 ) ; 
    // agescalc( arr , size ) ; 
    // Frequency( arr , size ) ; 
    // Dierollcount( ) ; 
    // Repeated_numbers( arr , size ) ; 
    
    return 0 ; 
}