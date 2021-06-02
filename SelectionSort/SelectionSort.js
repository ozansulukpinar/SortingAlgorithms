function SelectionSort(input)
{
        var length, index, isItChanged;
		
        length = input.length;
		index = 0;
		isItChanged = false;
		
		for (var i = 0; i < length; i++)
		{
			var smallestItem = input[i];			
			isItChanged = false;
			
			for (var j = (i + 1); j < length; j++)
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
}