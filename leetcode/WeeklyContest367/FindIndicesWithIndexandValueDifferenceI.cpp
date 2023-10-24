// Link to problem: https://leetcode.com/contest/weekly-contest-367/problems/find-indices-with-index-and-value-difference-i/

#include<cmath>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int> ans;
        
        int n = nums.size();    
        
        for(int i = 0; i < n; i++){
            for(int j= 0; j < n; j++){
                int absoIndex = abs(i - j);
                int absoValue = abs(nums[i] - nums[j]);
                if(absoIndex >= indexDifference && absoValue >= valueDifference){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};