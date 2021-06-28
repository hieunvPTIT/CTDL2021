#include<iostream>

using namespace std;

int n, k, s, result=0, a[25];

int sum(){
    int su = 0;
    for(int i = 1; i <= k; i++) su+=a[i];
    return su;
}

void Try(int i){
    int j;
    for(int j = a[i-1]+1; j <= n-k+i; j++ ){
        a[i] = j;
        if(i==k) {if(s==sum()) result++;}
        else Try(i+1);
    }
}

void solve(){
};

int main(){
    while (true)
    {
        cin >> n >> k >> s;
        if(n==0 && k==0 && s==0) break;
        result = 0;
        Try(1);
        cout<<result<<"\n";
    }
    return 0;
}