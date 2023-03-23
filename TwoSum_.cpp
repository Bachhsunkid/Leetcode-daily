#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int difference;

        for(int i = 0; i < nums.size(); i++ ){
            difference = target - nums.at(i);
            if(umap.find(difference) != umap.end()) {
                vector<int> v{umap[difference], i};
                return v;
            } else {
                umap[nums.at(i)] = i;
            }
        }

        return vector<int> {};
    }
};


int main(){
	vector<int> nums = {2,7,11,15};
	int target = 9;
	Solution s;
	s.twoSum(nums, target);
	
	cout<<nums[0]<<" - "<<nums[1];
}
