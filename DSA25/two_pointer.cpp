#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
        vector <int> twoPointer( vector <int>& numbers, int target){
                int i=0;
                int j = numbers.size() - 1;

                while (i < j){
                    int sum = numbers[i] + numbers[j];

                    if ( sum == target){
                        return {i+1,j+1};
                    }
                    
                    if ( sum < target){
                        i++;
                    }

                    else if ( sum > target){
                        j--;
                    }
                }
                return {};
                }
};



int main(){


    vector <int> numbers = {1,2,3,4,5,6};

    int target = 10;

    Solution sol;
    vector<int> res = sol.twoPointer(numbers, target);

    for (int x : res) cout << x << " ";
    cout << endl;

    return 0;
}