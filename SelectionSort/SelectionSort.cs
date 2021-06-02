public static void SelectionSort(int[] input)
{
    int length = input.Length;
    int index = 0;
    bool isItChanged = false;

    for(int i = 0; i < length; i++){
        int smallestItem = input[i];
        
        for(int j = (i + 1); j < length; j++){
            if(input[j] < smallestItem){
                smallestItem = input[j];
                index = j;
                isItChanged = true;
            }

            if(j == (length - 1) && isItChanged){
                input[index] = input[i];
                input[i] = smallestItem;
            }
        }
    }
}