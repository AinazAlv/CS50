
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int l = 0; 
    int w = 1;
    int s = 0;
    char c = '\0';
    
    string text = get_string("Text: ");
    
    for (int i = 0 ; i < strlen(text) ; i++)
    {
   
        if (isalpha(text[i]))
        {
        
            l++;
        }    
        if (text[i] == ' ')
        {
        
            w++;
        }   
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
        
            s++;
        }
    }     
    

    float grade = 0.0588 * (100 * (float) l / (float) w) - 0.296 * (100 * (float) s / (float) w) - 15.8;
    int grade1 = round(grade);
    
    if (grade1 > 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade1 < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade1);
    }

}
