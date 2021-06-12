// CS50 Online Intro to CS with Sami
//
// Week 01 - Mario steps program.
//
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = get_int("How many steps: ");

    for (int i = 0; i <= size; i++)
    {
        for (int blanks = size + 5 - i; blanks >= 1; blanks--)
        {
            printf(" ");
        }

        for (int boxes = 0; boxes < i; boxes++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}
