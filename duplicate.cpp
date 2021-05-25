class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = sizeof(nums) / sizeof(nums[0]);
        sort(nums, nums + n);
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                return nums[i];
            }
        }
        return -1;
    }
};