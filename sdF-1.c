/*
1. Write a program to find the number of vowels
in each of the 5 strings stored in two
dimensional arrays, taken from the user.
*/
#include <stdio.h>
int main()
{

    int count;
    char str[5][150], vowel[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    printf("enter 5 cities name: ");
    for (int i = 0; i < 5; i++)
    {
        fgets(str[i], 150, stdin);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < str[i][j]; j++)
        {
            for (int v = 0; v < 10; v++)
            {
                if (str[i][j] == vowel[v])
                {
                    count++;
                }
            }
        }
        printf("%s = %d", str[i], count);
        printf("\n");
        count = 0;
    }
}
