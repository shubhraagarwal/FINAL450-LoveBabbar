#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    string temp = s1 + s1;
    if (temp.find(s2) != string::npos)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}