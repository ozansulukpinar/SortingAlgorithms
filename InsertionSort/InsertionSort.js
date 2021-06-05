function InsertionSort(input) {
    var length, key;
    length = input.length;

    for (var i = 0; i < (length - 1); i++)
    {
        key = 0;

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
}