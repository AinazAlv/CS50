#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{

    if (argc == 2 && isdigit(*argv[1]))
    {
       
    int key = atoi(argv[1]);

    string s = get_string("plaintext: ");
    
    printf("ciphertext: ");

    for (int i = 0, n = strlen(s) ; i < n; i++)
    {
        int c = 0;    
        
        if (isupper(s[i]))
        {
            c = (((int)s[i] - 65 + key) % 26) + 65;
            printf("%c", (char) c);
             
        } 
        else if (islower(s[i]))
        {
          
            c = (((int)s[i] - 97 + key) % 26) + 97;
            printf("%c", (char) c);
        }

        else

        {
            printf("%c", s[i]);
        }
    }

    printf("\n");
    return 0;
    }
    else{
     printf("invalid\n");
   
        return 1;
    }

}
