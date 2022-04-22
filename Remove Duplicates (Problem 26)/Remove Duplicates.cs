public class Solution
{
    public int RemoveDuplicates(int[] nums)
    {
        int a = 0, b = 1;
        int n = nums.Length;
        
        while (b < n)
        {
            if (nums[a] == nums[b])
            {
                b++;
            }
            else
            {
                nums[a + 1] = nums[b];
                a++;
            }
        }
        a++;
        
        return a;
    }
}