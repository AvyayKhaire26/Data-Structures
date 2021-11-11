#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    //keep searching until low <=high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    //Searching ends
    return -1;
}
int main()
{
    //Unsorted array for linear search
    // int arr[] = {1, 2, 4, 5, 4, 6, 6, 756, 754, 21, 45, 65};
    // int element = 65;
    // int size = sizeof(arr) / sizeof(int);
    // int searchIndex = linearSearch(arr, size, element);
    // (searchIndex == -1) ? cout << "Element not found" : cout << "Element " << element << " found at index " << searchIndex;

    //Sorted array for binary search
    int arr[] = {1, 2, 4, 5, 6, 45, 56, 445, 556};
    int element = 56;
    int size = sizeof(arr) / sizeof(int); //or divide by sizeof(arr[0])
    int searchIndex = binarySearch(arr, size, element);
    (searchIndex == -1) ? cout << "Element not found" : cout << "Element " << element << " found at index " << searchIndex;
    return 0;
}