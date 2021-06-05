#include <stdio.h>

int main()
{
    // Any array can be written here
    int input[] = {7, 4, 6, 2, 10, 0, 8, 5, 3, 9, 1};
    int length = sizeof(input) / sizeof(int);
    int smallerValue = 0;
    int index = 0;

    while ((length - 1) > index)
    {
        for (int i = 0; i < (length - 1); i++)
        {
            if (input[i + 1] < input[i])
            {
                smallerValue = input[i + 1];
                input[i + 1] = input[i];
                input[i] = smallerValue;
            }
        }

        for (int j = (length - 1); j >= 1; j--)
        {
            if (input[j] < input[j - 1])
            {
                smallerValue = input[j];
                input[j] = input[j - 1];
                input[j - 1] = smallerValue;
            }
        }

        index++;
    }

    return 0;
}