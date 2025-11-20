#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 1;
        int officer = 0;
        int n = nums.size();
        int cm = 1;

        while(cm < n ){

            if ( nums[cm] == nums [cm-1]){
                cm++;
                continue;
            }

            nums[officer+1] = nums[cm];
            cm++;
            officer++;
            unique++;
        
        }
        return unique;

    }
};



int main(){
    vector <int> nums= {1,1,1,1,1,1,2,3,4,5,6,7,8,9,14,14,14,14,14,14};
    Solution sol;
    int res = sol.removeDuplicates(nums);

    
    cout << res;
    return 0;
}