#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int low;
    int high = str.length() - 1;
    while (low <= high)
    {
        str = swap(str[low], str[high]);
        low++;
        high--;
    }
    cout << str;
}