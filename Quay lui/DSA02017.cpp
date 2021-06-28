#include<iostream>
#include<algorithm>

using namespace std;

int n=8,arr[100][100], a[100]={0}, xuoi[100] = {0}, nguoc[100]={0}, x[100], maxSum=0; 

void input(){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++) cin>>arr[i][j];   
    }
}

void getSum(){
    int sum = 0;
    for(int i=1; i<=n; i++) sum+= x[i];
    maxSum = max(maxSum, sum);
}

void Try(int i){
   for(int j=1; j<=n; j++){
       if(!a[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
           x[i]=arr[i][j];
           a[j]=1;
           xuoi[i-j+n]=1;
           nguoc[i+j-1]=1;
           if(i==n) getSum();
           else Try(i+1);
           a[j]=0;
           xuoi[i-j+n]=0;
           nguoc[i+j-1]=0;
       }
   }
}

void solve(){
    maxSum=0;
    Try(1);
    cout<<maxSum<<"\n";
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