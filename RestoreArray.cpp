#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> b(n-1), a(n);
    for(int i = 0; i < n - 1; i++){
        cin >> b[i];
    }
    a[0] = b[0];
    for(int i = 1; i < n - 1; i++){
        a[i] = min(b[i], b[i - 1]);
    }
    a[n - 1] = b[n - 2];
    for(int i : a){
        cout << i << " ";
    }
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
