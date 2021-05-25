class Solution
{
public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        //code here
        map<int, int> mp; //Using map to store the array, map is like a dictionary, it only stores unique elements
        for (int i = 0; i < n; i++)
            mp.insert({a[i], i});

        for (int i = 0; i < m; i++)
        {

            mp.insert({b[i], i});
        }
        int count = 0;
        for (auto itr = mp.begin(); itr != mp.end(); itr++)
        {

            count++;
        }
        return count;
    }
};