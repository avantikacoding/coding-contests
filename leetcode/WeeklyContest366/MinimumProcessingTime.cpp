// Link to problem: https://leetcode.com/contest/weekly-contest-366/submissions/detail/1069825612/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        
        int n = processorTime.size();
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end());
        
            int max= 0;             
            int j = 4*n -1 ;
            int i =0;
            while (j >= 0){
               
                int t = tasks [j] +processorTime[i];
                if(  max < t){
                     max = t;
                }
               
                i ++;
                j = j - 4;
                    
            }

       
  
    return max;
        
    }
};