class Solution
{
public:
    int mySqrt(int x)
    {
        if(x==0 || x==1)
        {
            return x;
        }
        
        long long int l = 1, r = x / 2, sq;
        
        while(l <= r)
        {
            long long int mid = l + (r - l) / 2;
            sq = mid * mid;
            if(sq == x)
            {
                return mid;
            }
            if(sq < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        
        return l-1;
    }
};