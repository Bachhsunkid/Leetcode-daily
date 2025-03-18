#include<bits/stdc++.h>
using namespace std;

//Time complexity: Olog(n)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size();
        int mid;

        if(nums.front() > target) return 0;
        if(nums.back() < target) return nums.size();

        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid] == target){  
                return mid;
            }
            if(target < nums[mid]){     
                high = mid - 1;    
            }
            else
            {
                low = mid + 1;        
            }
        }
         return low;   
    }
};

int main(){
	Solution s;
	vector<int> v{1,3,5,6};
	cout<<s.searchInsert(v, 2);
}

