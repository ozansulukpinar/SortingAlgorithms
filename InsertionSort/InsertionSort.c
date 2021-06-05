#include <stdio.h>

int main()
{
    // Any array can be written here
    int input[] = {7, 4, 6, 2, 10, 0, 8, 5, 3, 9, 1};
    int length = sizeof(input) / sizeof(int);

    for (int i = 0; i < (length - 1); i++)
    {
        int key = 0;

        if (i == 0)
        {
            continue;
        }
        else
        {
            while (input[i + 1] < input[i])
            {
                key = input[i];
                input[i] = input[i + 1];
                input[i + 1] = key;
                i--;

                if (i < 0)
                    break;
            }
        }
    }

    return 0;
}