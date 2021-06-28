#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;
void input(){
    cin >> n;
    a.resize(n);
    for(int i = 0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
}

void solve(){
    int result = n, mid = n/2;
    for(int i = 0; i<n/2 && mid < n; i++){
        while(mid<n){
            if( 2 * a[i] <= a[mid] ) {
                result--;
                mid++;
                break;
            }
            else mid++;
        }
    }
    cout<<result<<"\n";
};

int main(){
    int t = 1;
    cin >> t; 
    while(t--){
        input();
        solve();
    }
    return 0;
}