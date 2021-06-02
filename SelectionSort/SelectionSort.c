#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Any array can be written here
    int input[] = {7, 4, 6, 2, 10, 0, 8, 5, 3, 9, 1};
    int length = sizeof(input) / sizeof(int);
    int index = 0;
    bool isItChanged = false;

    for (int i = 0; i < length; i++)
    {
        int smallestItem = input[i];
        isItChanged = false;

        for (int j = (i + 1); j < length; j++)
        {
            if (input[j] < smallestItem)
            {
                smallestItem = input[j];
                index = j;
                isItChanged = true;
            }

            if (j == (length - 1) && isItChanged)
            {
                input[index] = input[i];
                input[i] = smallestItem;
            }
        }
    }

    return 0;
}