/*

*/
#include<bits/stdc++.h>
using namespace std;


int main(){

             int t;cin>>t;
             while(t--){
              
           int n;string s;cin>>n>>s;
           int s1=1,s2=0;int l1=1;
           int l2=0;
           for(int i=1;i<n;i++){
                   int x=(s[i-1]-'0')^l1;
                   l1=x;
                   s1+=l1;
                   x=(s[i-1]-'0')^l2;
                   l2=x;
                   s2+=x;
           }
           cout<<max(s1,s2)<<"\n";
             }
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;++i){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<char>v(n+1,'0');
	   // const char c = ((str1[i] - '0') ^ (str2[i] - '0')) + '0'
	    for(int i=0; i<n;++i){
	     v[i+1] =   (v[i]-'0')^(s[i]-'0')+'0';
	    }
	    int first = 0;
	    for(int i=0;i<n;++i){
	        if(v[i]=='1'){
	            first++;
	        }
            // cout<<v[i]<<" ";
	    }
	     vector<char>v1(n+1,'1');
	    for(int i=0; i<n;++i){
	    v1[i+1] =   (v1[i]-'0')^(s[i]-'0')+'0';
	    }
	    int second = 0;
        // cout<<endl;
	    for(int i=0;i<n;++i){
	        if(v1[i]=='1'){
	            second++;
	        }
            // cout<<v1[i]<<" ";
	    }
	    int ans = max(first,second);
	    cout<<ans<<endl;
	    
	}
	return 0;
}
*/