#include<bits/stdc++.h>
using namespace std;

//Time complexity: O(n)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[count++] = nums[i];
            }
        }
        
//        for(auto x : nums){
//        	cout<<x;
//		}
//        return count;
    }
};

int main(){
	Solution s;
	vector<int> v{0,1,2,2,3,0,4,2};
	cout<<s.removeElement(v,2);
}

