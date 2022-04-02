class Solution {
public:
    bool isPalindrome(int x)
    {
        int mod = 0;
        long int rev = 0;
        int num = x;
        while (num != 0)
        {
            mod = num % 10;
            rev = rev * 10 + mod;
            num = num / 10;
        }
        
        if (x < 0)
        {
            return false;
        }
        if (x == rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};