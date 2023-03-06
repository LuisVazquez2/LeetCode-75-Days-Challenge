// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        long int ini = 1, fin = n, m;
        while (ini <= fin)
        {
            m = (ini + fin) / 2;
            if (isBadVersion(m))
            {
                fin = m - 1;
            }
            else
            {
                ini = m + 1;
            }
        }
        return (isBadVersion(m)) ? m : m + 1;
    }
};