#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int length = str.length();
    for (int i = length; i >= 0; i--)
    {
        cout << str[i];
    }
}