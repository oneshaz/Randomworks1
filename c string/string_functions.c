#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word1[] = "Vanshaz" ; 
    
    int size = strlen(word1) ; 
    printf("%d \n" , size ) ; 
    
    char word2[] = "Hello" ; 
    char word3[] = "Hello" ; 
    
    int result = strcmp( word2 , word3 ) ; //returns an int 
    // non zero if unequal , zero if equal
    printf("%d \n" , result ) ;
    
    char checkcase[] = "AbCDefGHI" ; 
    
    // strlwr( checkcase ) ; 
    // printf("%s \n" , checkcase ) ;
    // strupr( checkcase ) ; 
    // printf("%s \n" , checkcase ) ;
    
    char *concat = strcat( checkcase , word3 ) ; 
    printf("%s \n" , concat ) ;
    
    
    
}