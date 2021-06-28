#include<iostream>

using namespace std;

int n,k,a[1000005];

void input(){
    cin >> n >> k;
    for(int i=0; i<n; i++) cin>>a[i];
}

int search(int low, int high){
    int mid;
    if(low > high) return -1;
    else{
        mid = (low + high)/2;
        if(k==a[mid]) return mid;
        if(k<a[mid]) return search(low, mid-1);
        return search(mid+1, high);
    }
}

void solve(){
    int index = search(0,n-1);
    if(index==-1) cout << "NO";
    else cout<<index+1;
    cout<<"\n";
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