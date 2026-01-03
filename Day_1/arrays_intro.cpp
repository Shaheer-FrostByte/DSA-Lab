#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> &v)
{
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    
    cout << "\nFirst Element : " << v[0];
    cout << "\nLast Element : " << v[v.size() - 1];
    cout << "\n\nSum of Array : " << sum(v);
}