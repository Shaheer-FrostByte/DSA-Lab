#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> v)
{
    int s = 0;
    for (int x : v)
    {
        s += x;
    }
    return s;
}

int main()
{
    vector<int> nums = {15, 84, 32, 9, 48, 26, 84, 65};

    cout << "Numbers: ";
    for (int x : nums)
        cout << x << " ";
    cout << endl;

    cout << "Sum = " << sum(nums) << endl;

    string name = "FrostByte";
    cout << "Hello " << name << endl;

    return 0;
}