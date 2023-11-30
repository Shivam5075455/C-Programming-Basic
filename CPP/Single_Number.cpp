/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
*/

#include<iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(1);
    int c=0, n=nums.size();
    for(int i=0;i<n;i++){
        c=0;
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                c++;
                    break;
                if(c>=2){
                }
            }
        }
        if(c==0){
            cout<<nums.at(i)<<" ";
        }
    }
}