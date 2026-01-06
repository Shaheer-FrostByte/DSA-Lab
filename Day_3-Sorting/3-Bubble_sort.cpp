// Sort the array using Bubble sort.

#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &arr)
{
    cout << "\n\nUnsorted : ";
    for (int i : arr)
        cout << i << " ";

    for (int i = 0; i < arr.size() - 1; i++)
    {
        bool sorted = true; // Early Exit Optimization : Assumes that the array is sorted.
        for (int j = 0; j < arr.size() - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                sorted = false; // If even 1 element needed to be swapped, it means the array might still be unsorted. Updates 'sorted' to false.
            }
        }
        if (sorted) // If the array is sorted, exits the loop early. No need for extra iterations.
            break;
    }

    cout << "\n\nSorted : ";
    for (int i : arr)
        cout << i << " ";
}

int main()
{
    vector<int> arr = {9, 5, 4, 8, 2, 1};
    bubble_sort(arr);

    return 0;
}
