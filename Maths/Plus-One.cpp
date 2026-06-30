 
/*
Problem: Plus One
Link: https://leetcode.com/problems/plus-one/
Difficulty: Easy

*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();
       if(digits[n-1]!=9){
        digits[n-1]+=1;
        return digits;
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(digits[i]==9){
               digits[i]=0; 
            }else{
                digits[i]+=1;
                return digits;
            }
        }
        if(digits[0]==0){
          digits.push_back(0);
          digits[0]=1;
          return digits;
        }
    }
    return digits;
    } 
};
