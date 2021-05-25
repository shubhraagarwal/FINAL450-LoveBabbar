#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int Max = 0, Min = 0, r = 0;
    sort(arr, arr + n);
    r = arr[n - 1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= k)
        {
            Max = max(arr[i - 1] + k, arr[n - 1] - k);
            Min = min(arr[i] - k, arr[0] - k);

            r = min(r, Max - Min);
        }
        else
        {
            continue;
        }
    }
    return r;
}