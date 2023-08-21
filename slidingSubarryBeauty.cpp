/*
Given an integer array nums containing n integers, find the beauty of each subarray of size k.

The beauty of a subarray is the xth smallest integer in the subarray if it is negative, or 0 if there are fewer than x negative integers.

Return an integer array containing n - k + 1 integers, which denote the beauty of the subarrays in order from the first index in the array.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,-1,-3,-2,3], k = 3, x = 2
Output: [-1,-2,-2]
Explanation: There are 3 subarrays with size k = 3. 
The first subarray is [1, -1, -3] and the 2nd smallest negative integer is -1. 
The second subarray is [-1, -3, -2] and the 2nd smallest negative integer is -2. 
The third subarray is [-3, -2, 3] and the 2nd smallest negative integer is -2.
Example 2:

Input: nums = [-1,-2,-3,-4,-5], k = 2, x = 2
Output: [-1,-2,-3,-4]
Explanation: There are 4 subarrays with size k = 2.
For [-1, -2], the 2nd smallest negative integer is -1.
For [-2, -3], the 2nd smallest negative integer is -2.
For [-3, -4], the 2nd smallest negative integer is -3.
For [-4, -5], the 2nd smallest negative integer is -4. 
Example 3:

Input: nums = [-3,1,2,-3,0,-3], k = 2, x = 1
Output: [-3,0,-3,-3,-3]
Explanation: There are 5 subarrays with size k = 2.
For [-3, 1], the 1st smallest negative integer is -3.
For [1, 2], there is no negative integer so the beauty is 0.
For [2, -3], the 1st smallest negative integer is -3.
For [-3, 0], the 1st smallest negative integer is -3.
For [0, -3], the 1st smallest negative integer is -3.
 

Constraints:

n == nums.length 
1 <= n <= 105
1 <= k <= n
1 <= x <= k 
-50 <= nums[i] <= 50 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int find(int arr[],int x){
        for(int i=50;i>0;i--){
            if(arr[i]>0)x-=arr[i];
            if(x<=0)return i;
        }
        return 0;
    }
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int arr[52]={0};// to store freq in a window
        for(int i=0;i<k;i++){
            if(nums[i]<0)
            arr[abs(nums[i])]+=1;
        }
        vector<int> ans(nums.size()-k+1,0);
        for(int i=k;i<=nums.size();i++){
            int l=find(arr,x);// seach xth smallest elementsl
            if(l>0)
            ans[i-k]=(-l);             
            if(i<nums.size()&&nums[i]<0)// to store new element
            arr[abs(nums[i])]+=1;
            if(nums[i-k]<0)// to remove out of window element
            arr[abs(nums[i-k])]-=1;
            
        } 
        return ans;
    }
};

int main(){
  Solution ob;
  vector<int>vc{1,-1,-3,-2,3};
  int k=2,x=2;
  ob.getSubarrayBeauty(vc,k,x);
  return 0;
}