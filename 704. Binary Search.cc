class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int ini = 0, fin = nums.size() - 1;
        while (ini <= fin)
        {
            int mid = (ini + fin) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] > target)
                fin = mid - 1;
            else
                ini = mid + 1;
        }
        return -1;
    }
};