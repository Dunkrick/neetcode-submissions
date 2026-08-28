class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        count.reserve(nums.size());

        int maxFrequency = 0;

        for (int num : nums) {
            maxFrequency = max(maxFrequency, ++count[num]);
        }

        vector<vector<int>> buckets(maxFrequency + 1);

        for (const auto& [number, frequency] : count) {
            buckets[frequency].push_back(number);
        }

        vector<int> result;
        result.reserve(k);

        for (int frequency = maxFrequency; frequency >= 1; --frequency) {
            for (int number : buckets[frequency]) {
                result.push_back(number);

                if (result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
