/*
You are given an integer array nums. You need to create a 2D array from nums satisfying the following conditions:

The 2D array should contain only the elements of the array nums.
Each row in the 2D array contains distinct integers.
The number of rows in the 2D array should be minimal.
Return the resulting array. If there are multiple answers, return any of them.

Note that the 2D array can have a different number of elements on each row.


Input: nums = [1,3,4,1,2,3,1]
Output: [[1,3,4,2],[1,3],[1]]
Explanation: We can create a 2D array that contains the following rows:
- 1,3,4,2
- 1,3
- 1
All elements of nums were used, and each row of the 2D array contains distinct integers, so it is a valid answer.
It can be shown that we cannot have less than 3 rows in a valid array.
Example 2:

Input: nums = [1,2,3,4]
Output: [[4,3,2,1]]
Explanation: All elements of the array are distinct, so we can keep all of them in the first row of the 2D array.
 

*/


#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,3,4,2,1,2,1,3};//{1,2,3,4};//{1,3,4,1,2,3,1};//{1,3,4,1,2,3,1,2};
	int n=sizeof(a)/sizeof(int);
	sort(a,a+n);
	map<int,int>mp;
	set<int>se;
	vector<int>v1;
	vector<vector<int>>v2;
	for(int i=0; i<n;i++){
		mp[a[i]]++;
		se.insert(a[i]);
	}
	int mx=INT_MIN;
	for(auto it : mp){
		cout<<it.first<<" "<<it.second<<endl;
		mx=max(mx,it.second);
	}
	cout<<endl;

	for(int i=1; i<=mp.size(); i++){
		cout<<mp[i]<<" "<<" "<<endl;
	}
	cout<<endl;
	// for( auto it :se){
	// 	cout<<it<<" ";
	// }
cout<<endl;
	while(mx--){
		for(auto it :se){
			if(mp[it]>0){
				v1.push_back(it);
				mp[it]--;
			}
		}
		v2.push_back(v1);
		v1.clear();
	}

	for(auto ix:v2){
		for(auto xi: ix){
			cout<<xi<<" ";
		}
		cout<<endl;
	}

	return 0;
}

/*

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        vector<int> freq(nums.size()+1,0);
        
        for(auto x:nums)
        {
            freq[x]++;
        }
        
        int maxi=0;
        
        for(int i=1;i<=(int)nums.size();i++)
        {
            maxi=max(maxi,freq[i]);
        }
        
        vector<vector<int>> v(maxi);
        
        for(int i=1;i<=nums.size();i++)
        {
            for(int j=1;j<=freq[i];j++)
            {
                v[j-1].push_back(i);
            }
        }
        
        return v;
    }
};
*/