// Question : Check if a given word is a palindrome or not.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;

    cout << "\nEnter any word : ";
    cin >> word;

    int left = 0, right = word.size() - 1;
    bool is_pal = true;
    while (left < right)
    {
        if (word[left] != word[right])
        {
            is_pal = false;
            break;
        }
        left++, right--;
    }

    if (is_pal)
        cout << "It is a palindrome.";
    else
        cout << "It is not a palindrome.";

    return 0;
}