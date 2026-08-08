class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> a;
        for(int x:nums){
            a.insert(x);
        }
        if(nums.size()!=a.size())
        return true;
        else
        return false;
        
    }
};