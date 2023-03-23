class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1, -1};
        auto it1 = lower_bound(nums.begin(), nums.end(), target);
        auto it2 = upper_bound(nums.begin(), nums.end(), target);
        if(it1 != nums.end() && *it1 == target) {
            result[0] = it1 - nums.begin();
            result[1] = it2 - nums.begin() - 1;
        }
        return result;
    }
};
