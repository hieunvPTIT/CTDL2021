#include<bits/stdc++.h>

using namespace std;

int n, p, s, sum = 0, check = 0, isPrime[201]={0};
vector<int> prime, x;
vector<vector<int> > result;
void input(){
    cin >> n >> p >> s;
}

void sieve(){
    for(int i =2; i<= sqrt(200);i++ ){
        if(!isPrime[i]){
            for(int j =i*i; j<= 200; j+=i) isPrime[j] = 1;
        }
    }

    for(int i=2; i<=200; i++) {
        if(!isPrime[i]) {
            prime.push_back(i);
            // cout<<i<<" ";
        }
    }
}

void print(){
    cout<<result.size()<<"\n";
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j< result[i].size(); j++) cout<<result[i][j]<<" ";
        cout<<"\n";
    }
}

void Try(int i, int sum, int k){
    if(check == 1) return;
    if(sum == s && k == n){ result.push_back(x); return;}

    int j = i+1;
    while (sum+prime[j] <= s && k<n)
    {
        x.push_back(prime[j]);
        Try(j, sum+prime[j], k+1);
        x.pop_back();
        j++;
    }
}

void solve(){
    int i = 0;
    while(p>=prime[i]) i++;
    check = 0;
    result.clear();
    x.clear();
    Try(i-1,0,0);
    print();
};

int main(){
    int t = 1;
    sieve();
    cin >> t; 
    while(t--){
        input();
        solve();
    }
    return 0;
}