#include <stdio.h>


int main()
{
    //c does not have a built-in string datatype
    
    char name[] = "Vanshaz" ; 
    char name2[8] = { 'V' , 'a' , 'n' , 's' , 'h' , 'a' , 'z' , '\0'} ; 
    
    // notice the extra space ; \0 is the null character, it marks the end of a string
    // c needs to know when the string ends
    
    char animal[] = "CAT" ; //this actually occupies 4 spaces
    
    //WAYS TO INITIALIZE A STRING IN C 
    
    char word1[] = "Hello"  ; //this automatically allocates space( including null pointer )
    char word2[20] = "Hello" ; //the remaining elements will be 0 initialized
    char word3[] = {'H' , 'e', 'l', 'l', 'o', '\0'} ; 
    char *word4 = "Hello" ; //this points to string literal
    
    // you should not try to modify the elements of string literals - results in undefined behavior
    
    //TAKING STRING INPUT IN C 
    
    char string1[50] ; 
    scanf("%49s", string1) ; //notice how we didnt use &string1 
    //this is because the array string1 decays into its first element's pointer when passed thru a function
    //scanf() needs that address to store the input 
    //we used %49s cuz we will only use 49 position - last is reserbed for null terminator
    
    //there is a limitation to using scanf - it stops reading/storing after the whitespace 
    
    
    getchar() ; //consumers leftoever \n from the first input
    //or just use fgets for both inputs
    
    char string2[50] ; 
    fgets( string2 , sizeof( string2 ) , stdin ) ; //can store the entire line 
    //fgets( string_name , size , stdin ) ; 
    //fgets can also store new line characters 

    
    return 0 ; 
}