#include <iostream>

void reverseArray(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[] = {1, 4, 3, 8, 5, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, n);
    std::cout << std::endl;
    std::cout << "Reverse array:  ";
    reverseArray(arr, n);
    printArray(arr, n);
    return 0;
}

void printArray(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        std::cout << arr[i] << " ";
        i++;
    }
}

void reverseArray(int arr[], int n)
{
    int x[n];
    int i = 0;
    int j = 0;
    while (i < n)
    {
        x[n - 1 - i] = arr[i];
        i++;
    }
    while (j < n)
    {
        arr[j] = x[j];
        j++;
    }
}