/*

A substring of s is considered balanced if all zeroes are before ones and the number of zeroes is equal to the number of ones inside the substring. Notice that the empty substring is considered a balanced substring.

Return the length of the longest balanced substring of s.

A substring is a contiguous sequence of characters within a string.

 

Example 1:

Input: s = "01000111"
Output: 6
Explanation: The longest balanced substring is "000111", which has length 6.
Example 2:

Input: s = "00111"
Output: 4
Explanation: The longest balanced substring is "0011", which has length 4. 
Example 3:

Input: s = "111"
Output: 0
Explanation: There is no balanced substring except the empty substring, so the answer is 0.

*/



#include <bits/stdc++.h>
using namespace std;
int main(){
	//string s="010001101";
	string s;
	cin>>s;
	int n=s.size();
	int zn[n],on[n];
	int z=1,nr=1;
	int pvz=0,pvn=0;


	for(int i=0; i<n; i++){
		if(s[i]=='0'){
     zn[i]=z;
pvz=z;
z++;
		}
		else if(s[i]='1'){
			zn[i]=pvz;
			z=1;
		}
	}


for(int i=0; i<n; i++){
		cout<<zn[i]<<" ";
	}
cout<<endl;


	for(int i=n-1; i>=0; i--){
		if(s[i]=='1'){
     on[i]=nr;
pvn=nr;
nr++;
		}
		else if(s[i]='1'){
			on[i]=pvn;
			nr=1;
		}
	}
	for(int i=0; i<n; i++){
		cout<<on[i]<<" ";
	}
cout<<endl;
int mx=INT_MIN,mn=INT_MAX;
	for(int i=0; i<n; i++){
mx=max(mx,(min(on[i],zn[i])));
	}

	if(mx<0) cout<<0;
	else cout<<2*mx;
	return 0;
}