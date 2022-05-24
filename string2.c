// POINTER with STRING
// program no 1
/*
#include<stdio.h>  
void main ()  
{  
    char s[11] = "javatpoint";  
    char *p = s; // pointer p is pointing to string s.   
    printf("%s",p); // the string javatpoint is printed if we print p.  
} 
*/







// program no 2
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char array[20];
   char *string=array;
   printf("enter string as input=");
    scanf("%[^\n]s",string);
    printf("u enter string is =%s",string);
}
*/


// pointers to copy the content of a string into another.

/*#include<stdio.h>  
void main ()  
{  
    char *p = "hello satya";  
    printf("String p: %s\n",p);  
    char *q;  
    printf("copying the content of p into q...\n");  
    q = p;  
    printf("String q: %s\n",q);  
}  
*/


/*
#include <stdio.h>
#include <string.h>
void main() {
    char *p="satyanarayan";
    printf("befor copying value=%s",p);
    printf("\n");
    char *q;
  q=p;
    printf("after copying p val=%s",q);
}
*/

// Once a string is defined, it cannot be reassigned to another set of characters. However, using pointers, we can assign the set of characters to the string. Consider the following example.

#include<stdio.h>  
void main ()  
{  
    char *p = "hello javatpoint";  
    printf("Before assigning: %s\n",p);  
    p = "hello";  
    printf("After assigning: %s\n",p);  
} 