#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int isWinner(vector<int>& pl1, vector<int>& pl2) {
        int s1=pl1[0]+pl1[1],s2=pl2[0]+pl2[1],k=0;
        
   
        for(int i=2;i<pl1.size();i++){
if((pl1[i-2]==10 || pl1[i-1]==10 ) && i>2){
 // cout<<s1<<" ";
  pl1[i]=pl1[i]*2;
  s1=s1+pl1[i];
}else{
  //cout<<s1<<" ";
  s1=pl1[i]+s1;
}
cout<<endl;
if((pl2[i-2]==10 || pl2[i-1]==10)&&i>2){
  pl2[i]=pl2[i]*2;
  s2=s2+pl2[i];
}else{
  s2=pl2[i]+s2;
}
    }

   // cout<<s1<<" "<<s2<<endl;
if(s1>s2){
 k= 1;
}
  else if(s2>s1){
 k= 2;
}else if(s1==s2){
k= 0;
}
        return k;
    }
};
int main(){
  /*
  [7,3,6,7]
[4,2,6,7]

[3,6,10,8]
[9,9,9,9]
Output:
1
Expected:
2
  */
  vector<int>vc1{4},vc2{5};
  Solution ob;
 cout<< ob.isWinner(vc1,vc2);
  return 0;
}