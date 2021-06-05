function CocktailSort(input) {
    var length, index, smallerValue;
    index = smallerValue = 0;
    length = input.length;

    while ((length - 1) > index)
    {
        for (var i = 0; i < (length - 1); i++)
        {
            if (input[i + 1] < input[i])
            {
                smallerValue = input[i + 1];
                input[i + 1] = input[i];
                input[i] = smallerValue;
            }
        }

        for (var j = (length - 1); j >= 1; j--)
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
}