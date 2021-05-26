#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    string result;
    getline(cin, result);

    if (s1.length() + s2.length() != result.length())
    {
        cout << -1;
    }
    int i = 0, j = 0, k = 0;
    while (k != result.length())
    {
        if (i < s1.length() && s1[i] == result[k])
        {
            i++;
            k++;
        }
        else if (j < s2.length() && s2[j] == result[k])
        {
            j++;
            k++;
        }
        else
        {
            cout << -1;
            break;
        }
        cout << "Match";
    }
}