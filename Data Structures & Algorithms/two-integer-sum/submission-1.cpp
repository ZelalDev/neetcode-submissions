class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++){
            int y=target-nums[i];
            if(a.contains(y))
            return {a[y],i};
            a[nums[i]]=i;
        }
        return {};
        
    }
};
