class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(target - nums[i]) != m.end())//check for the already found index
            {
                ans = {i,m[target-nums[i]]};
                break;
            }
            m[nums[i]] = i;//else store the index of the number in map
        }
        return ans;
    }
};