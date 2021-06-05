public static void CocktailSort(int[] input)
{
		int length = input.Length;
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
}