public static void InsertionSort(int[] input)
{
		int length = input.Length;

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
}