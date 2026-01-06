// Sort the array using Selection Sort.
// Note: The Early Exit Optimization does not work with Selection Sort.

#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &arr)
{
    cout << "\n\nUnsorted : ";
    for (int i : arr)
        cout << i << " ";

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    cout << "\n\nSorted : ";
    for (int i : arr)
        cout << i << " ";
}

int main()
{
    vector<int> arr = {9, 5, 4, 8, 2, 1};
    selection_sort(arr);

    return 0;
}
