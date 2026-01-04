// You are given a sorted array of integers 'nums' of lenght 'n' and an integer target.
// Your target is to determine whether there exists a pair of different indices 'i' and 'j' such that:
//                      nums[i] + nums[j] == target
//  Print 'YES' if a pair exists and 'NO' otherwise.

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    // Taking Input
    int n = 0;
    cout << "\nEnter the length of array : ";
    cin >> n;

    vector<int> array(n);
    cout << "\nEnter the elements of array.\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> array[i];
    }

    int target = 0;
    cout << "\nEnter target : ";
    cin >> target;

    // Checking for pair
    int left = 0, right = n - 1;
    bool pair_exists = false;
    while (left < right)
    {
        if (array[left] + array[right] == target)
        {
            pair_exists = true;
            break;
        }
        else if (array[left] + array[right] < target)
            left++;
        else if (array[left] + array[right] > target)
            right--;
    }

    if (pair_exists)
        cout << "\n\nYES, at indices " << left << " and " << right;
    else
        cout << "\n\nNO";

    return 0;
}