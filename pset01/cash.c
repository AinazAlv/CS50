// Prints an n-by-n grid of bricks with a loop

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    int c = 0;

    do
    {
        n = get_float("Change owed: ");
    }
    while (n < 0);
    n = round(n * 100);
    printf("%f\n", n);
 

    while (n > 0)
    {
        if (n >= 25)
        {
            n = n - 25;
            c = c + 1;
        }
        else if (n >= 10)
        {
            n = n - 10;
            c = c + 1;
        }   
        else if (n >= 5)
        {
            n = n - 5;
            c = c + 1;
        }
        else
        {
            n = n - 1;
            c = c + 1;
        }
    }

    printf("%d\n", c);
}