#include<iostream>

using namespace std;

int n, a[100]={0}, xuoi[100] = {0}, nguoc[100]={0}, result=0; 

void input(){
    cin >> n;
}

void Try(int i){
   for(int j=1; j<=n; j++){
       if(!a[j] && !xuoi[i-j+n] && !nguoc[i+j-1]){
           a[j]=1;
           xuoi[i-j+n]=1;
           nguoc[i+j-1]=1;
           if(i==n) result++;
           else Try(i+1);
           a[j]=0;
           xuoi[i-j+n]=0;
           nguoc[i+j-1]=0;
       }
   }
}

void solve(){
    result=0;
    Try(1);
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