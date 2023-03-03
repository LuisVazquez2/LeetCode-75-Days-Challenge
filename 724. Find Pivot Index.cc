class Solution
{
public:
    int pivotIndex(vector<int> &arre)
    {
        int n = arre.size();
        for (int i = 1; i < n; i++)
            arre[i] += arre[i - 1];
        for (int i = 0; i < n; i++)
        {
            int current_pivot = arre[i];
            if (i > 0)
                current_pivot -= arre[i - 1];
            int left_sum = 0, right_sum = arre[n - 1] - arre[i];
            if (i > 0)
                left_sum = arre[i] - current_pivot;
            if (left_sum == right_sum)
                return i;
        }
        return -1;
    }
};