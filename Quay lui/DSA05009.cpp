#include<bits/stdc++.h>

using namespace std;

int n, a[105], sum = 0, check = 0;

void input(){
    cin >> n;
    for(int i = 0; i < n; i++) cin>>a[i];
}

void print(){
    cout<<"\n";
}

void Try(int i, int s){
    if(check == 1) return;
    if(s == sum/2){ check=1; return;}

    int j = i+1;
    while (s+a[j] <= sum/2 && j<n)
    {
        Try(j, s+a[j]);
        j++;
    }
    
}

void solve(){
    sum=0;
    check = 0;
    for(int i = 0; i < n; i++) sum+=a[i];
    if(sum%2==1) {cout << "NO" << "\n"; return;}
    Try(-1,0);
    cout << (check ? "YES" : "NO") << "\n";
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