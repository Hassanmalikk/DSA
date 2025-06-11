class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int size=nums.size()-1;
        int sum=0;
        int newval;
        int value=INT_MIN;
        for (int i=0;i<k;i++)
        {
            for(int i=0;i<nums.size();i++)
            {
                value=max(value,nums[i]);


            }
           
            sum+=value;
            newval=value+1;
            replace(nums.begin(),nums.end(),value,newval);
        }
        return sum;
        
    }
};
