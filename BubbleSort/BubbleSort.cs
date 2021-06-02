public static void BubbleSort(int[] input)
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

		index++;
	}
}