#include <stdio.h>

int main()
{
    int arr[50], num, x, y, temp;
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &num);
    printf("Please Enter the Value of Elements: ");
    for(x = 0; x < num; x++)

        scanf("%d", &arr[x]);

    for(x = 0; x < num - 1; x++)
    {
     for(y = 0; y < num - x - 1; y++)
     {
        if(arr[y] > arr[y + 1])
        {
            temp = arr[y];
            [y] = arr[y + 1];
            arr[y + 1] = temp;
        }
     }
    }
    printf("Array after implementing bubble sort: ");
    printf("%d  ", arr[num-1]);



    return 0;

}
