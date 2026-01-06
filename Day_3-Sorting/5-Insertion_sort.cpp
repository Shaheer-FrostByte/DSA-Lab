#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    cout << "\n\nUnsorted : ";
    for (int i : arr)
        cout << i << " ";

    for (int i = 1; i < arr.size(); i++)
    {
        int x = arr[i], j_index = -1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > x)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                j_index = j;
                break;
            }
        }
        arr[j_index + 1] = x;
    }

    cout << "\n\nSorted : ";
    for (int i : arr)
        cout << i << " ";
}

int main()
{
    vector<int> arr = {9, 5, 4, 8, 2, 1};
    insertion_sort(arr);

    return 0;
}