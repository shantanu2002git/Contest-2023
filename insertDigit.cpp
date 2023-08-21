#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		char d;
		string num;
		cin>>n>>d>>num;
		int i=0;
		while(i<n && num[i]>=d) i++;
		num.insert(i,1,d);
		cout<<num<<endl;
	}
}
/*
Note that numbers of the same length are compared lexicographically. That is, until some index the numbers will match, and then the digit in our number should be greater.

Let's write out the numbers s1,s2,…si
 until si≥d
. As soon as this condition is false or the line ends, insert the digit d
.

We got the lexicographically maximum number, which means just the maximum number.
*/