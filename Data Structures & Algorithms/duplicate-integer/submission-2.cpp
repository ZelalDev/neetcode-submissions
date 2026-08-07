class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> a;
        for(int x:nums){
            a.insert(x);
        }
        if(a.size()!=nums.size())
        return true;
        else
        return false;
        
    }
};