#include<bits/stdc++.h>
using namespace std;

//Time complexity: O(n/2)

class Solution {
public:
    bool isPalindrome(int x){
        if(x<0 || x!=0 && x%10 ==0 ) return false;
        int check=0;
        while(x>check){
            check = check*10 + x%10;
            x/=10;
        }
        return (x==check || x==check/10);
    }
};

int main(){
	Solution s;
	cout<<s.isPalindrome(1221);
}
