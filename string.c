// 1.program number first

/*#include <stdio.h>
#include <string.h>
void main() {
    // (\0  is denote your string is now end)
    // char array[5]={'a','b','c','d','\0'};
    // (if u assind more then given value it will throw warning)
    // char array[5]={'a','b','c','d','e','\0'};
    char array[]={'a','b','c','d','e','\0'};
    printf("all array is %s\n",array);
}
*/

// 2.program number second
// #include <stdio.h>
// #include <string.h>
// void main() {
//     char  array[]={"satyaraut"};
//     printf("%s",array);
// }



/*// RUNTIME STRING
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[5];
        printf("input string charater=");

    for (i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
        str[4] = '\0';
        printf("%s", str);
        printf("\n");

    }

    return 0;
}
*/



// Traversing String
// 1)By using the length of string
// 2)By using the null character.


// 3.program number third
// Using the length of string
// Let's see an example of counting the number of vowels in a string.

/*
#include <stdio.h>
#include <string.h>
void main() {
    int i=0;
    char string[11]={'s','a','t','y','a','n','a','r','a','y','\0'};
    int count = 0;
    while (i <= 10) {
        if (string[i]=='a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'u' || string[i] == 'o')
        {
          count++;
        }
        i++;
        
    }
     printf("The number of vowels %d",count);  
}
*/


/*
// same uper code
#include <stdio.h>
#include <string.h>
void main() {
    int i=0;
    char string[11]={"satyanaraut"};
    int count = 0;
    while (i <= 10) {
        if (string[i]=='a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'u' || string[i] == 'o')
        {
          count++;
        }
        i++;
        
    }
     printf("The number of vowels %d",count);  
}
*/

// Using the null character
// Let's see the same example of counting the number of vowels by using the null character.

/*
#include <stdio.h>
#include <string.h>
void main(){
    int i=0;
    char array[11]={"satyanaraut"};
    int count=0;
    while(array[i] != 0) {
        if (array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='o'||array[i]=='u')
        {
           count++;
        }
        i++;
    }
    printf("count is %d\n",count);
}
*/


// Accepting string as the INPUT
/*
#include <stdio.h>
#include <string.h>
void main(){
    char array[20];
    printf("enter string as input=");
    scanf("%s",array);
    printf("\n");
    printf("you Enter string as input %s",array);
}
*/

/*It is clear from the output that, the above code will not work for space separated strings. To make this code working for the space separated strings, the minor changed required in the scanf function, i.e., instead of writing scanf("%s",s), we must write: scanf("%[^\n]s",s) which instructs the compiler to store the string s while the new line (\n) is encountered. Let's consider the following example to store the space-separated strings.
*/
/*
#include <stdio.h>
#include <string.h>
void main() {
    char s[30];
    printf("enter string as input=");
    scanf("%[^\n]s",s);
    printf("u enter string as input= %s",s);
}
*/


