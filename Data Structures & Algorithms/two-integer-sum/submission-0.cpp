class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> bucket;
        for(int i=0; i<nums.size(); ++i){
            int remaining = target - nums[i];
            if(bucket.find(remaining)!=bucket.end()){
                return {bucket[remaining],i};
            }
            bucket[nums[i]] = i;
        }
        return {};
    }
};
