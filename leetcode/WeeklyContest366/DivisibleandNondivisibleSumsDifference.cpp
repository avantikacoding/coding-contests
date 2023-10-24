// Link to problem: https://leetcode.com/contest/weekly-contest-366/submissions/detail/1069779074/

#include<iostream>
using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sunND = 0;
        int sumD = 0;
        for (int i = 1; i<=n; i++){
            
            if(i%m != 0){
                sunND = sunND+i;
            }
            if(i%m == 0){
                sumD = sumD+i;
            }
        }
        return (sunND - sumD);
    }
};