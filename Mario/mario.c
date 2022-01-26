#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int answer = get_int("Height: ");
    while (answer > 8 || answer < 1)
    {
        answer = get_int("Height: ");
    }

    //Column
    for (int i = 0; i < answer; i++)
    {
        int z = (answer - i);
        while (z > 0)
        {
            printf(" ");
            z--;
        }
        //Row
        for (int j = 0; j <= i; j++)
        {

            //Begin hastags for row
            printf("#");

            //Create a Gap
            if (j == i)
            {
                printf("  ");
            }
        }

        //Ending hastags
        for (int x = 0; x <= i; x++)
        {
            printf("#");
        }

        printf("\n");
    }
}