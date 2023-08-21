/*
APP:::::::::;
Observation
From Line 20 to 40
m1 is largest m2 is second largest

case 1: m1==m2

so if count of m1>=ceil(n/2.0) then no else yes

case 2: m1 != m2

if count of m1 or m2 is n-1 then no else yes

*/




#include<bits/stdc++.h>
using namespace std;

#define cn cout<<"NO"<<endl
#define cy cout<<"YES"<<endl
#define int long long int
#define mod 1000000007
#define loop(i,n) for(int i=0;i<n;i++)
#define pb push_back

void solve(){
    int n;
    cin>>n;
    int a[n];
    loop(i,n) cin>>a[i];
    int b[n];
    loop(i,n) b[i]=a[i];
    sort(b,b+n);
    int m1=b[n-1];
    int m2=b[n-2];
    // cout<<m1<<" "<<m2<<endl;
    int ct1=count(a,a+n,m1);
    int ct2=count(a,a+n,m2);

    if(n==2) cn;

    else if(m1==m2){
        
        if(ct1>ceil(n/2.0))
            cn;
        else
            cy;
    }
    else{
        
        if(ct1==n-1 || ct2==n-1)
            cn;
        else
            cy;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int tc=1;
    cin>>tc;
    while(tc--){solve();}
}